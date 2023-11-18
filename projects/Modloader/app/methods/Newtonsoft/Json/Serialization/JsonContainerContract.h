#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonContract.h>
#include <Modloader/app/structs/JsonContainerContract.h>
#include <Modloader/app/structs/JsonConverter.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_TypeNameHandling_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Serialization::JsonContainerContract {
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::JsonContract*, get_ItemContract, (app::JsonContainerContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0186DCF0, void, set_ItemContract, (app::JsonContainerContract * this_ptr, app::JsonContract* value))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::JsonContract*, get_FinalItemContract, (app::JsonContainerContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::JsonConverter*, get_ItemConverter, (app::JsonContainerContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_ItemConverter, (app::JsonContainerContract * this_ptr, app::JsonConverter* value))
    IL2CPP_REGISTER_METHOD(0x0186DD60, app::Nullable_1_Boolean_, get_ItemIsReference, (app::JsonContainerContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0186DD70, void, set_ItemIsReference, (app::JsonContainerContract * this_ptr, app::Nullable_1_Boolean_ value))
    IL2CPP_REGISTER_METHOD(0x0186DD80, app::Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_, get_ItemReferenceLoopHandling, (app::JsonContainerContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0186DD90, void, set_ItemReferenceLoopHandling, (app::JsonContainerContract * this_ptr, app::Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ value))
    IL2CPP_REGISTER_METHOD(0x0186DDA0, app::Nullable_1_Newtonsoft_Json_TypeNameHandling_, get_ItemTypeNameHandling, (app::JsonContainerContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0186DDB0, void, set_ItemTypeNameHandling, (app::JsonContainerContract * this_ptr, app::Nullable_1_Newtonsoft_Json_TypeNameHandling_ value))
    IL2CPP_REGISTER_METHOD(0x0186DDC0, void, ctor, (app::JsonContainerContract * this_ptr, app::Type* underlying_type))
} // namespace app::classes::Newtonsoft::Json::Serialization::JsonContainerContract
