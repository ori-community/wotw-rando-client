#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/fsObjectProcessor.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/fsData.h>

namespace app::classes::FullSerializer::fsObjectProcessor {
    IL2CPP_REGISTER_METHOD(0x015145E0, bool, CanProcess, (app::fsObjectProcessor * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHODINFO(0x0473C4C8, fsObjectProcessor_CanProcess__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (app::fsObjectProcessor * this_ptr, app::Type* storage_type, app::Object* instance))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterSerialize, (app::fsObjectProcessor * this_ptr, app::Type* storage_type, app::Object* instance, app::fsData** data))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeDeserialize, (app::fsObjectProcessor * this_ptr, app::Type* storage_type, app::fsData** data))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeDeserializeAfterInstanceCreation, (app::fsObjectProcessor * this_ptr, app::Type* storage_type, app::Object* instance, app::fsData** data))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, (app::fsObjectProcessor * this_ptr, app::Type* storage_type, app::Object* instance))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::fsObjectProcessor * this_ptr))
} // namespace app::classes::FullSerializer::fsObjectProcessor
