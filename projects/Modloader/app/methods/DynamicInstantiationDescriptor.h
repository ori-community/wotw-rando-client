#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DynamicInstantiationDescriptor {
    IL2CPP_REGISTER_METHOD(0x030DC4B0, void, ctor, (app::DynamicInstantiationDescriptor * this_ptr, app::GameObject* prefab, int32_t count, app::Nullable_1_Single_ high_priority_prewarm_ratio))
    IL2CPP_REGISTER_METHOD(0x030DC4C0, bool, Equals_1, (app::DynamicInstantiationDescriptor * this_ptr, app::DynamicInstantiationDescriptor* other))
    IL2CPP_REGISTER_METHOD(0x030DC670, bool, Equals_2, (app::DynamicInstantiationDescriptor * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x030DC760, int32_t, GetHashCode, (app::DynamicInstantiationDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030DC880, bool, op_Equality, (app::DynamicInstantiationDescriptor * left, app::DynamicInstantiationDescriptor* right))
    IL2CPP_REGISTER_METHOD(0x030DC8A0, bool, op_Inequality, (app::DynamicInstantiationDescriptor * left, app::DynamicInstantiationDescriptor* right))
    IL2CPP_REGISTER_METHOD(0x030DC980, app::String*, ToString, (app::DynamicInstantiationDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030DCA90, app::Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_*, get_ReflectionCache, ())
    IL2CPP_REGISTER_METHOD(0x030DCC60, void, ClearCache, ())
    IL2CPP_REGISTER_METHOD(0x030DCD80, app::List_1_DynamicInstantiationDescriptor_ReflectionInfo_*, GetReflectionInfo, (app::Type * component_type))
    IL2CPP_REGISTER_METHOD(0x030DD290, app::Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo_, GetInfoForDynamicInstantiationProvider, (app::Type * component_type, app::FieldInfo_1* field))
    IL2CPP_REGISTER_METHOD(0x030DD550, app::MethodInfo_1*, GetMethodInfoForDynamicInstantiationProvider, (app::Type * component_type, app::FieldInfo_1* field))
    IL2CPP_REGISTER_METHOD(0x030DD7C0, app::Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo_, GetInfoForDynamicInstantiation, (app::Type * component_type, app::FieldInfo_1* field))
    IL2CPP_REGISTER_METHOD(0x030DDA90, app::DynamicInstantiationDescriptor_CountGetter*, GetConstantCountGetter, (int32_t constant))
    IL2CPP_REGISTER_METHOD(0x030DDCB0, app::DynamicInstantiationDescriptor_CountGetter*, CreateCountGetter, (app::Type * component_type, app::FieldInfo_1* field, bool is_array_or_list, app::DynamicInstantiationAttribute* attribute))
    IL2CPP_REGISTER_METHOD(0x030DEAC0, app::String*, GetObjectNameSafe, (app::GameObject * obj))
    IL2CPP_REGISTER_METHOD(0x030DEB70, app::List_1_DynamicInstantiationDescriptor_*, FromMonoBehaviourOld, (app::MonoBehaviour * component))
    IL2CPP_REGISTER_METHODINFO(0x047148F0, DynamicInstantiationDescriptor_FromMonoBehaviourOld__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030DFFF0, app::List_1_DynamicInstantiationDescriptor_*, FromMonoBehaviour, (app::MonoBehaviour * component))
    IL2CPP_REGISTER_METHOD(0x030E01D0, void, cctor, ())
    inline bool operator==(app::DynamicInstantiationDescriptor& left, app::DynamicInstantiationDescriptor& right) {
        return op_Equality(&left, &right);
    }
    inline bool operator!=(app::DynamicInstantiationDescriptor& left, app::DynamicInstantiationDescriptor& right) {
        return op_Inequality(&left, &right);
    }
} // namespace app::classes::DynamicInstantiationDescriptor
