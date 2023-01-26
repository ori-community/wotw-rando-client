#pragma once
#include <Modloader/app/structs/AnalyzeTypeIsResult__Enum.h>
#include <Modloader/app/structs/AnalyzeTypeIsResult__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnalyzeTypeIsResult__Enum {
        inline app::AnalyzeTypeIsResult__Enum__Class** type_info() {
            static app::AnalyzeTypeIsResult__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnalyzeTypeIsResult__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnalyzeTypeIsResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnalyzeTypeIsResult__Enum__Class>(type_info(), "System.Linq.Expressions", "AnalyzeTypeIsResult");
        }
        inline app::AnalyzeTypeIsResult__Enum* create() {
            return il2cpp::create_object<app::AnalyzeTypeIsResult__Enum>(get_class());
        }
    } // namespace AnalyzeTypeIsResult__Enum
} // namespace app::classes::types
