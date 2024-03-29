#pragma once
#include <Modloader/app/structs/MergeFailedEventArgs.h>
#include <Modloader/app/structs/MergeFailedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MergeFailedEventArgs {
        inline app::MergeFailedEventArgs__Class** type_info() {
            static app::MergeFailedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MergeFailedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04731DF8));
            }
            return cache;
        }
        inline app::MergeFailedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::MergeFailedEventArgs__Class>(type_info(), "System.Data", "MergeFailedEventArgs");
        }
        inline app::MergeFailedEventArgs* create() {
            return il2cpp::create_object<app::MergeFailedEventArgs>(get_class());
        }
    } // namespace MergeFailedEventArgs
} // namespace app::classes::types
