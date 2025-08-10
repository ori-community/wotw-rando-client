#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseUriAnnotation.h>
#include <Modloader/app/structs/EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Xml_Linq_XObjectChangeAnnotation_.h>
#include <Modloader/app/structs/LineInfoAnnotation.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SaveOptions__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XElement.h>
#include <Modloader/app/structs/XObject.h>
#include <Modloader/app/structs/XObjectChangeAnnotation.h>
#include <Modloader/app/structs/XObjectChangeEventArgs.h>

namespace app::classes::System::Xml::Linq::XObject {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::XObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0303AAB0, app::String*, get_BaseUri, app::XObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0303AB70, app::XElement*, get_Parent, app::XObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0303AC30, void, AddAnnotation, app::XObject* this_ptr, app::Object* annotation)
    IL2CPP_REGISTER_METHOD(0x0303AF10, app::Object*, Annotation_1, app::XObject* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x0303B090, void, add_Changed, app::XObject* this_ptr, app::EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_* value)
    IL2CPP_REGISTER_METHOD(0x0303B250, void, remove_Changed, app::XObject* this_ptr, app::EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_* value)
    IL2CPP_REGISTER_METHOD(0x0303B350, void, add_Changing, app::XObject* this_ptr, app::EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_* value)
    IL2CPP_REGISTER_METHOD(0x0303B510, void, remove_Changing, app::XObject* this_ptr, app::EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_* value)
    IL2CPP_REGISTER_METHOD(0x0303B610, bool, IXmlLineInfo_HasLineInfo, app::XObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0303B6A0, int32_t, IXmlLineInfo_get_LineNumber, app::XObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0303B730, int32_t, IXmlLineInfo_get_LinePosition, app::XObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0303B7C0, bool, get_HasBaseUri, app::XObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0303B850, bool, NotifyChanged, app::XObject* this_ptr, app::Object* sender, app::XObjectChangeEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x0303B940, bool, NotifyChanging, app::XObject* this_ptr, app::Object* sender, app::XObjectChangeEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x0303BA30, void, SetBaseUri, app::XObject* this_ptr, app::String* base_uri)
    IL2CPP_REGISTER_METHOD(0x0303BB80, void, SetLineInfo, app::XObject* this_ptr, int32_t line_number, int32_t line_position)
    IL2CPP_REGISTER_METHOD(0x0303BCF0, bool, SkipNotify, app::XObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0303BEE0, app::SaveOptions__Enum, GetSaveOptionsFromAnnotations, app::XObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157ACA0, app::Object*, Annotation_2, app::XObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0156C620, app::IEnumerable_1_System_Object_*, Annotations_1, app::XObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E1D60, void, RemoveAnnotations_1, app::XObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157ACA0, app::BaseUriAnnotation*, Annotation_3, app::XObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157ACA0, app::XObjectChangeAnnotation*, Annotation_4, app::XObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E1D60, void, RemoveAnnotations_2, app::XObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157ACA0, app::LineInfoAnnotation*, Annotation_5, app::XObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0156C620, app::IEnumerable_1_System_Xml_Linq_XObjectChangeAnnotation_*, Annotations_2, app::XObject* this_ptr)
} // namespace app::classes::System::Xml::Linq::XObject
