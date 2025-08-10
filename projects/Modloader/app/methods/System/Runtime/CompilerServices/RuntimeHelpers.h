#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RuntimeFieldHandle.h>
#include <Modloader/app/structs/RuntimeTypeHandle.h>

namespace app::classes::System::Runtime::CompilerServices::RuntimeHelpers {
    IL2CPP_REGISTER_METHOD(0x01A92480, void, InitializeArray_1, app::Array* array, void* fld_handle)
    IL2CPP_REGISTER_METHOD(0x01A92590, void, InitializeArray_2, app::Array* array, app::RuntimeFieldHandle fld_handle)
    IL2CPP_REGISTER_METHOD(0x007E3F30, int32_t, get_OffsetToStringData, )
    IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, app::Object* o)
    IL2CPP_REGISTER_METHOD(0x01A92740, app::Object*, GetObjectValue, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01A92750, void, RunClassConstructor_1, void* type)
    IL2CPP_REGISTER_METHOD(0x01A92790, void, RunClassConstructor_2, app::RuntimeTypeHandle type)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, SufficientExecutionStack, )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, TryEnsureSufficientExecutionStack, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrepareConstrainedRegions, )
    IL2CPP_REGISTER_METHOD(0x01569540, bool, IsReferenceOrContainsReferences_1, )
    IL2CPP_REGISTER_METHOD(0x01568140, bool, IsReferenceOrContainsReferences_2, )
    IL2CPP_REGISTER_METHOD(0x01568280, bool, IsReferenceOrContainsReferences_3, )
    IL2CPP_REGISTER_METHOD(0x015683C0, bool, IsReferenceOrContainsReferences_4, )
    IL2CPP_REGISTER_METHOD(0x01568500, bool, IsReferenceOrContainsReferences_5, )
    IL2CPP_REGISTER_METHOD(0x01568640, bool, IsReferenceOrContainsReferences_6, )
    IL2CPP_REGISTER_METHOD(0x01568780, bool, IsReferenceOrContainsReferences_7, )
    IL2CPP_REGISTER_METHOD(0x015688C0, bool, IsReferenceOrContainsReferences_8, )
    IL2CPP_REGISTER_METHOD(0x01568A00, bool, IsReferenceOrContainsReferences_9, )
    IL2CPP_REGISTER_METHOD(0x01568B40, bool, IsReferenceOrContainsReferences_10, )
    IL2CPP_REGISTER_METHOD(0x01568C80, bool, IsReferenceOrContainsReferences_11, )
    IL2CPP_REGISTER_METHOD(0x01568DC0, bool, IsReferenceOrContainsReferences_12, )
    IL2CPP_REGISTER_METHOD(0x01568F00, bool, IsReferenceOrContainsReferences_13, )
    IL2CPP_REGISTER_METHOD(0x01569040, bool, IsReferenceOrContainsReferences_14, )
    IL2CPP_REGISTER_METHOD(0x01569180, bool, IsReferenceOrContainsReferences_15, )
    IL2CPP_REGISTER_METHOD(0x015692C0, bool, IsReferenceOrContainsReferences_16, )
    IL2CPP_REGISTER_METHOD(0x01569400, bool, IsReferenceOrContainsReferences_17, )
    IL2CPP_REGISTER_METHOD(0x01569680, bool, IsReferenceOrContainsReferences_18, )
    IL2CPP_REGISTER_METHOD(0x015697C0, bool, IsReferenceOrContainsReferences_19, )
    IL2CPP_REGISTER_METHOD(0x01569900, bool, IsReferenceOrContainsReferences_20, )
    IL2CPP_REGISTER_METHOD(0x01569A40, bool, IsReferenceOrContainsReferences_21, )
    IL2CPP_REGISTER_METHOD(0x01569B80, bool, IsReferenceOrContainsReferences_22, )
    IL2CPP_REGISTER_METHOD(0x01569CC0, bool, IsReferenceOrContainsReferences_23, )
    IL2CPP_REGISTER_METHOD(0x01569E00, bool, IsReferenceOrContainsReferences_24, )
    IL2CPP_REGISTER_METHOD(0x01569F40, bool, IsReferenceOrContainsReferences_25, )
    IL2CPP_REGISTER_METHOD(0x0156A080, bool, IsReferenceOrContainsReferences_26, )
} // namespace app::classes::System::Runtime::CompilerServices::RuntimeHelpers
