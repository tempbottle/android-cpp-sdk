/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.NodeList
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_NODELIST_HPP_DECL
#define J2CPP_ORG_W3C_DOM_NODELIST_HPP_DECL


namespace j2cpp { namespace org { namespace w3c { namespace dom { class Node; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <org/w3c/dom/Node.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class NodeList;
	class NodeList
		: public object<NodeList>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit NodeList(jobject jobj)
		: object<NodeList>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< org::w3c::dom::Node > item(jint);
		jint getLength();
	}; //class NodeList

} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_NODELIST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_NODELIST_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_NODELIST_HPP_IMPL

namespace j2cpp {



org::w3c::dom::NodeList::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< org::w3c::dom::Node > org::w3c::dom::NodeList::item(jint a0)
{
	return call_method<
		org::w3c::dom::NodeList::J2CPP_CLASS_NAME,
		org::w3c::dom::NodeList::J2CPP_METHOD_NAME(0),
		org::w3c::dom::NodeList::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::w3c::dom::Node >
	>(get_jobject(), a0);
}

jint org::w3c::dom::NodeList::getLength()
{
	return call_method<
		org::w3c::dom::NodeList::J2CPP_CLASS_NAME,
		org::w3c::dom::NodeList::J2CPP_METHOD_NAME(1),
		org::w3c::dom::NodeList::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::w3c::dom::NodeList,"org/w3c/dom/NodeList")
J2CPP_DEFINE_METHOD(org::w3c::dom::NodeList,0,"item","(I)Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::NodeList,1,"getLength","()I")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_NODELIST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
