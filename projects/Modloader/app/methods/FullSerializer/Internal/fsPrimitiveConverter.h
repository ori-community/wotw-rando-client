#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/fsPrimitiveConverter.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/fsResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/fsData.h>

namespace app::classes::FullSerializer::Internal::fsPrimitiveConverter {
    IL2CPP_REGISTER_METHOD(0x0165B220, bool, CanProcess, (app::fsPrimitiveConverter * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestCycleSupport, (app::fsPrimitiveConverter * this_ptr, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestInheritanceSupport, (app::fsPrimitiveConverter * this_ptr, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x0165B360, bool, UseBool, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x0165B410, bool, UseInt64, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x0165B650, bool, UseDouble, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x0165B780, bool, UseString, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x0165B880, app::fsResult, TrySerialize, (app::fsPrimitiveConverter * this_ptr, app::Object* instance, app::fsData** serialized, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x0165C2F0, app::fsResult, TryDeserialize, (app::fsPrimitiveConverter * this_ptr, app::fsData* storage, app::Object** instance, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::fsPrimitiveConverter * this_ptr))
} // namespace app::classes::FullSerializer::Internal::fsPrimitiveConverter
