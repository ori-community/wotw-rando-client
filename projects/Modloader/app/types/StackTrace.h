#pragma once
#include <Modloader/app/structs/StackTrace.h>
#include <Modloader/app/structs/StackTrace__Array.h>
#include <Modloader/app/structs/StackTrace__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StackTrace {
        inline app::StackTrace__Class** type_info() {
            static app::StackTrace__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StackTrace__Class**)(modloader::win::memory::resolve_rva(0x04724580));
            }
            return cache;
        }
        inline app::StackTrace__Class* get_class() {
            return il2cpp::get_class<app::StackTrace__Class>(type_info(), "System.Diagnostics", "StackTrace");
        }
        inline app::StackTrace* create() {
            return il2cpp::create_object<app::StackTrace>(get_class());
        }
        inline app::StackTrace__Array* create_array(int size) {
            return il2cpp::array_new<app::StackTrace__Array>(get_class(), size);
        }
        inline app::StackTrace__Array* create_array(const std::vector<app::StackTrace*>& items) {
            return il2cpp::array_new<app::StackTrace__Array>(get_class(), items);
        }
    } // namespace StackTrace
} // namespace app::classes::types
