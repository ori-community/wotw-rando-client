#pragma once
#include <Modloader/app/structs/ReaderWriterLockSlim_TimeoutTracker.h>
#include <Modloader/app/structs/ReaderWriterLockSlim_TimeoutTracker__Boxed.h>
#include <Modloader/app/structs/ReaderWriterLockSlim_TimeoutTracker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReaderWriterLockSlim_TimeoutTracker {
        inline app::ReaderWriterLockSlim_TimeoutTracker__Class** type_info() {
            static app::ReaderWriterLockSlim_TimeoutTracker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReaderWriterLockSlim_TimeoutTracker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReaderWriterLockSlim_TimeoutTracker__Class* get_class() {
            return il2cpp::get_nested_class<app::ReaderWriterLockSlim_TimeoutTracker__Class>(type_info(), "System.Threading", "ReaderWriterLockSlim", "TimeoutTracker");
        }
        inline app::ReaderWriterLockSlim_TimeoutTracker* create() {
            return il2cpp::create_object<app::ReaderWriterLockSlim_TimeoutTracker>(get_class());
        }
        inline app::ReaderWriterLockSlim_TimeoutTracker__Boxed* box(app::ReaderWriterLockSlim_TimeoutTracker value) {
            return il2cpp::box_value<app::ReaderWriterLockSlim_TimeoutTracker__Boxed>(get_class(), value);
        }
    } // namespace ReaderWriterLockSlim_TimeoutTracker
} // namespace app::classes::types
