#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FullSerializer::fsSerializer_fsLazyCycleDefinitionWriter {
    IL2CPP_REGISTER_METHOD(0x0151C550, void, WriteDefinition, (app::fsSerializer_fsLazyCycleDefinitionWriter * this_ptr, int32_t id, app::fsData* data))
    IL2CPP_REGISTER_METHOD(0x0151C7B0, void, WriteReference, (app::fsSerializer_fsLazyCycleDefinitionWriter * this_ptr, int32_t id, app::Dictionary_2_System_String_FullSerializer_fsData_* dict))
    IL2CPP_REGISTER_METHOD(0x0151CBB0, void, Clear, (app::fsSerializer_fsLazyCycleDefinitionWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0151CCA0, void, ctor, (app::fsSerializer_fsLazyCycleDefinitionWriter * this_ptr))
} // namespace app::classes::FullSerializer::fsSerializer_fsLazyCycleDefinitionWriter
