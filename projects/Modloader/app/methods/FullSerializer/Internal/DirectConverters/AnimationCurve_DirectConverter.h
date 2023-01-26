#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/fsResult.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/AnimationCurve_DirectConverter.h>
#include <Modloader/app/structs/Dictionary_2_System_String_FullSerializer_fsData_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/fsData.h>

namespace app::classes::FullSerializer::Internal::DirectConverters::AnimationCurve_DirectConverter {
    IL2CPP_REGISTER_METHOD(0x0164ADD0, app::fsResult, DoSerialize, (app::AnimationCurve_DirectConverter * this_ptr, app::AnimationCurve* model, app::Dictionary_2_System_String_FullSerializer_fsData_* serialized))
    IL2CPP_REGISTER_METHOD(0x0164B090, app::fsResult, DoDeserialize, (app::AnimationCurve_DirectConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::AnimationCurve** model))
    IL2CPP_REGISTER_METHOD(0x0164B490, app::Object*, CreateInstance, (app::AnimationCurve_DirectConverter * this_ptr, app::fsData* data, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x0164B610, void, ctor, (app::AnimationCurve_DirectConverter * this_ptr))
} // namespace app::classes::FullSerializer::Internal::DirectConverters::AnimationCurve_DirectConverter
