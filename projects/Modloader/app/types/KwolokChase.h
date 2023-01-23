#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokChase__Class.h>
#include <Modloader/app/structs/KwolokChase.h>

namespace app::classes::types {
    namespace KwolokChase {
        namespace {
            inline app::KwolokChase__Class* type_info_ref = nullptr;
        }
        inline app::KwolokChase__Class** type_info = &type_info_ref;
        inline app::KwolokChase__Class* get_class() {
            return il2cpp::get_class<app::KwolokChase__Class>(type_info, "", "KwolokChase");
        }
        inline app::KwolokChase* create() {
            return il2cpp::create_object<app::KwolokChase>(get_class());
        }
    } // namespace KwolokChase
} // namespace app::classes::types
