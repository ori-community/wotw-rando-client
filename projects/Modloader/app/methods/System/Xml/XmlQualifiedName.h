#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlQualifiedName_HashCodeOfStringDelegate.h>

namespace app::classes::System::Xml::XmlQualifiedName {
    IL2CPP_REGISTER_METHOD(0x016FF860, void, ctor_1, (app::XmlQualifiedName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FF8F0, void, ctor_2, (app::XmlQualifiedName * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x016FF990, void, ctor_3, (app::XmlQualifiedName * this_ptr, app::String* name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Namespace, (app::XmlQualifiedName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, (app::XmlQualifiedName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FFA60, int32_t, GetHashCode, (app::XmlQualifiedName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FFBB0, bool, get_IsEmpty, (app::XmlQualifiedName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FFBF0, app::String*, ToString_1, (app::XmlQualifiedName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FFCA0, bool, Equals, (app::XmlQualifiedName * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x016FFE20, bool, op_Equality, (app::XmlQualifiedName * a, app::XmlQualifiedName* b))
    IL2CPP_REGISTER_METHOD(0x016FFEC0, bool, op_Inequality, (app::XmlQualifiedName * a, app::XmlQualifiedName* b))
    IL2CPP_REGISTER_METHOD(0x016FFF70, app::String*, ToString_2, (app::String * name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01700020, app::XmlQualifiedName_HashCodeOfStringDelegate*, GetHashCodeDelegate, ())
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsRandomizedHashingDisabled, ())
    IL2CPP_REGISTER_METHOD(0x01700280, int32_t, GetHashCodeOfString, (app::String * s, int32_t length, int64_t additional_entropy))
    IL2CPP_REGISTER_METHOD(0x017002B0, void, Init, (app::XmlQualifiedName * this_ptr, app::String* name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, SetNamespace, (app::XmlQualifiedName * this_ptr, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x017002C0, void, Verify, (app::XmlQualifiedName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017003B0, void, Atomize, (app::XmlQualifiedName * this_ptr, app::XmlNameTable* name_table))
    IL2CPP_REGISTER_METHOD(0x01700410, app::XmlQualifiedName*, Parse, (app::String * s, app::IXmlNamespaceResolver* nsmgr, app::String** prefix))
    IL2CPP_REGISTER_METHOD(0x01700630, app::XmlQualifiedName*, Clone, (app::XmlQualifiedName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01700780, void, cctor, ())
    inline bool operator==(app::XmlQualifiedName& a, app::XmlQualifiedName& b) {
        return op_Equality(&a, &b);
    }
    inline bool operator!=(app::XmlQualifiedName& a, app::XmlQualifiedName& b) {
        return op_Inequality(&a, &b);
    }
} // namespace app::classes::System::Xml::XmlQualifiedName
