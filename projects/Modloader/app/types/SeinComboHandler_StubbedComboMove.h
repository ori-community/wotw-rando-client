#pragma once
#include <Modloader/app/structs/SeinComboHandler_StubbedComboMove.h>
#include <Modloader/app/structs/SeinComboHandler_StubbedComboMove__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinComboHandler_StubbedComboMove {
        inline app::SeinComboHandler_StubbedComboMove__Class** type_info() {
            static app::SeinComboHandler_StubbedComboMove__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinComboHandler_StubbedComboMove__Class**)(modloader::win::memory::resolve_rva(0x0478F700));
            }
            return cache;
        }
        inline app::SeinComboHandler_StubbedComboMove__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinComboHandler_StubbedComboMove__Class>(type_info(), "", "SeinComboHandler", "StubbedComboMove");
        }
        inline app::SeinComboHandler_StubbedComboMove* create() {
            return il2cpp::create_object<app::SeinComboHandler_StubbedComboMove>(get_class());
        }
    } // namespace SeinComboHandler_StubbedComboMove
} // namespace app::classes::types
