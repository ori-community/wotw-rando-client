#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReaderWriterLockSlim_TimeoutTracker {
        namespace {
            app::ReaderWriterLockSlim_TimeoutTracker__Class* type_info_ref = nullptr;
        }
        app::ReaderWriterLockSlim_TimeoutTracker__Class** type_info = &type_info_ref;
        inline app::ReaderWriterLockSlim_TimeoutTracker__Class* get_class() {
            return il2cpp::get_nested_class<app::ReaderWriterLockSlim_TimeoutTracker__Class>(type_info, "System.Threading", "ReaderWriterLockSlim", "TimeoutTracker");
        }
        inline app::ReaderWriterLockSlim_TimeoutTracker* create() {
            return il2cpp::create_object<app::ReaderWriterLockSlim_TimeoutTracker>(get_class());
        }
        inline app::ReaderWriterLockSlim_TimeoutTracker__Boxed* box(app::ReaderWriterLockSlim_TimeoutTracker value) {
            return il2cpp::box_value<app::ReaderWriterLockSlim_TimeoutTracker__Boxed>(get_class(), value);
        }
    } // namespace ReaderWriterLockSlim_TimeoutTracker
} // namespace app::classes::types
