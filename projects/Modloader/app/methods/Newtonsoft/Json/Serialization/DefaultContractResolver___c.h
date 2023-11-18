#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DefaultContractResolver_c.h>
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/IEnumerable_1_System_Reflection_MemberInfo_.h>
#include <Modloader/app/structs/JsonProperty.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Serialization::DefaultContractResolver___c {
    IL2CPP_REGISTER_METHOD(0x018694C0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DefaultContractResolver_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01869600, bool, _GetSerializableMembers_b__40_0, (app::DefaultContractResolver_c * this_ptr, app::MemberInfo_1* m))
    IL2CPP_REGISTER_METHOD(0x01869760, app::IEnumerable_1_System_Reflection_MemberInfo_*, _GetExtensionDataMemberForType_b__44_0, (app::DefaultContractResolver_c * this_ptr, app::Type* base_type))
    IL2CPP_REGISTER_METHOD(0x01869910, bool, _GetExtensionDataMemberForType_b__44_1, (app::DefaultContractResolver_c * this_ptr, app::MemberInfo_1* m))
    IL2CPP_REGISTER_METHOD(0x01869DB0, bool, _GetAttributeConstructor_b__47_0, (app::DefaultContractResolver_c * this_ptr, app::ConstructorInfo* c))
    IL2CPP_REGISTER_METHOD(0x01869E80, int32_t, _CreateProperties_b__75_0, (app::DefaultContractResolver_c * this_ptr, app::JsonProperty* p))
} // namespace app::classes::Newtonsoft::Json::Serialization::DefaultContractResolver___c
