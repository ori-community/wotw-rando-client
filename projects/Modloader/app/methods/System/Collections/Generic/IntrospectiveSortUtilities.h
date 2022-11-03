#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::IntrospectiveSortUtilities {
    IL2CPP_REGISTER_METHOD(0x020225B0, int32_t, FloorLog2, (int32_t n))
    IL2CPP_REGISTER_METHOD(0x020225D0, void, ThrowOrIgnoreBadComparer, (app::Object * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0472A1C8, IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer__MethodInfo)
} // namespace app::classes::System::Collections::Generic::IntrospectiveSortUtilities
