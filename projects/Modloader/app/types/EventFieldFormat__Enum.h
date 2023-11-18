#pragma once
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/EventFieldFormat__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventFieldFormat__Enum {
        inline app::EventFieldFormat__Enum__Class** type_info() {
            static app::EventFieldFormat__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventFieldFormat__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventFieldFormat__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventFieldFormat__Enum__Class>(type_info(), "System.Diagnostics.Tracing", "EventFieldFormat");
        }
        inline app::EventFieldFormat__Enum* create() {
            return il2cpp::create_object<app::EventFieldFormat__Enum>(get_class());
        }
    } // namespace EventFieldFormat__Enum
} // namespace app::classes::types
