#pragma once
#include <Modloader/app/structs/ScoreResult__Enum.h>
#include <Modloader/app/structs/ScoreResult__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScoreResult__Enum {
        inline app::ScoreResult__Enum__Class** type_info() {
            static app::ScoreResult__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScoreResult__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478FFB8));
            }
            return cache;
        }
        inline app::ScoreResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::ScoreResult__Enum__Class>(type_info(), "", "ScoreResult");
        }
        inline app::ScoreResult__Enum* create() {
            return il2cpp::create_object<app::ScoreResult__Enum>(get_class());
        }
    } // namespace ScoreResult__Enum
} // namespace app::classes::types
