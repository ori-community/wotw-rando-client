#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GarbageCollectionDetector.h>

namespace app::classes::GarbageCollectionDetector {
    IL2CPP_REGISTER_METHOD(0x00416940, void, Finalize, (app::GarbageCollectionDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GarbageCollectionDetector * this_ptr))
} // namespace app::classes::GarbageCollectionDetector
