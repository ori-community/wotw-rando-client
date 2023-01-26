#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/fsCyclicReferenceManager_ObjectReferenceEqualityComparator.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::FullSerializer::Internal::fsCyclicReferenceManager_ObjectReferenceEqualityComparator {
    IL2CPP_REGISTER_METHOD(0x01652210, bool, IEqualityComparer_object__Equals, (app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x01652220, int32_t, IEqualityComparer_object__GetHashCode, (app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::fsCyclicReferenceManager_ObjectReferenceEqualityComparator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01652230, void, cctor, ())
} // namespace app::classes::FullSerializer::Internal::fsCyclicReferenceManager_ObjectReferenceEqualityComparator
