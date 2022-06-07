#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FullSerializer::Internal::fsCyclicReferenceManager_ObjectReferenceEqualityComparator {
    IL2CPP_REGISTER_METHOD(0x01652210, bool, IEqualityComparer_object__Equals, (app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator * this_ptr, app::Object * x, app::Object * y))
    IL2CPP_REGISTER_METHOD(0x01652220, int32_t, IEqualityComparer_object__GetHashCode, (app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01652230, void, cctor, ())
}
