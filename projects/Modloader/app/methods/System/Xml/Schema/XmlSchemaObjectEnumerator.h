#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlSchemaObjectEnumerator.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlSchemaObject.h>

namespace app::classes::System::Xml::Schema::XmlSchemaObjectEnumerator {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::XmlSchemaObjectEnumerator * this_ptr, app::IEnumerator* enumerator))
    IL2CPP_REGISTER_METHOD(0x01CB7040, bool, MoveNext, (app::XmlSchemaObjectEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CB70D0, app::XmlSchemaObject*, get_Current, (app::XmlSchemaObjectEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CB71C0, void, IEnumerator_Reset, (app::XmlSchemaObjectEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CB7250, bool, IEnumerator_MoveNext, (app::XmlSchemaObjectEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CB72E0, app::Object*, IEnumerator_get_Current, (app::XmlSchemaObjectEnumerator * this_ptr))
} // namespace app::classes::System::Xml::Schema::XmlSchemaObjectEnumerator
