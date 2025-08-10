#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DtdValidator_NamespaceManager.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::Schema::DtdValidator_NamespaceManager {
    IL2CPP_REGISTER_METHOD(0x00502220, app::String*, LookupNamespace, app::DtdValidator_NamespaceManager* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DtdValidator_NamespaceManager* this_ptr)
} // namespace app::classes::System::Xml::Schema::DtdValidator_NamespaceManager
