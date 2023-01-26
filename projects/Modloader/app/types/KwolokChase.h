#pragma once
#include <Modloader/app/structs/KwolokChase.h>
#include <Modloader/app/structs/KwolokChase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokChase {
        inline app::KwolokChase__Class** type_info() {
            static app::KwolokChase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokChase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokChase__Class* get_class() {
            return il2cpp::get_class<app::KwolokChase__Class>(type_info(), "", "KwolokChase");
        }
        inline app::KwolokChase* create() {
            return il2cpp::create_object<app::KwolokChase>(get_class());
        }
    } // namespace KwolokChase
} // namespace app::classes::types
