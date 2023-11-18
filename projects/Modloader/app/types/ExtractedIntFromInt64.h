#pragma once
#include <Modloader/app/structs/ExtractedIntFromInt64.h>
#include <Modloader/app/structs/ExtractedIntFromInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExtractedIntFromInt64 {
        inline app::ExtractedIntFromInt64__Class** type_info() {
            static app::ExtractedIntFromInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExtractedIntFromInt64__Class**)(modloader::win::memory::resolve_rva(0x04721770));
            }
            return cache;
        }
        inline app::ExtractedIntFromInt64__Class* get_class() {
            return il2cpp::get_class<app::ExtractedIntFromInt64__Class>(type_info(), "", "ExtractedIntFromInt64");
        }
        inline app::ExtractedIntFromInt64* create() {
            return il2cpp::create_object<app::ExtractedIntFromInt64>(get_class());
        }
    } // namespace ExtractedIntFromInt64
} // namespace app::classes::types
