#pragma once
#include <Modloader/app/structs/ExceptionEntry.h>
#include <Modloader/app/structs/ExceptionEntry__Array.h>
#include <Modloader/app/structs/ExceptionEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExceptionEntry {
        inline app::ExceptionEntry__Class** type_info() {
            static app::ExceptionEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExceptionEntry__Class**)(modloader::win::memory::resolve_rva(0x04751890));
            }
            return cache;
        }
        inline app::ExceptionEntry__Class* get_class() {
            return il2cpp::get_class<app::ExceptionEntry__Class>(type_info(), "Moon.ExceptionProcessing", "ExceptionEntry");
        }
        inline app::ExceptionEntry* create() {
            return il2cpp::create_object<app::ExceptionEntry>(get_class());
        }
        inline app::ExceptionEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::ExceptionEntry__Array>(get_class(), size);
        }
        inline app::ExceptionEntry__Array* create_array(const std::vector<app::ExceptionEntry*>& items) {
            return il2cpp::array_new<app::ExceptionEntry__Array>(get_class(), items);
        }
    } // namespace ExceptionEntry
} // namespace app::classes::types
