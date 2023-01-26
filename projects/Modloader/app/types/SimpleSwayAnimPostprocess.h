#pragma once
#include <Modloader/app/structs/SimpleSwayAnimPostprocess.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess__Array.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleSwayAnimPostprocess {
        inline app::SimpleSwayAnimPostprocess__Class** type_info() {
            static app::SimpleSwayAnimPostprocess__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SimpleSwayAnimPostprocess__Class**)(modloader::win::memory::resolve_rva(0x0472ED18));
            }
            return cache;
        }
        inline app::SimpleSwayAnimPostprocess__Class* get_class() {
            return il2cpp::get_class<app::SimpleSwayAnimPostprocess__Class>(type_info(), "Moon", "SimpleSwayAnimPostprocess");
        }
        inline app::SimpleSwayAnimPostprocess* create() {
            return il2cpp::create_object<app::SimpleSwayAnimPostprocess>(get_class());
        }
        inline app::SimpleSwayAnimPostprocess__Array* create_array(int size) {
            return il2cpp::array_new<app::SimpleSwayAnimPostprocess__Array>(get_class(), size);
        }
        inline app::SimpleSwayAnimPostprocess__Array* create_array(const std::vector<app::SimpleSwayAnimPostprocess*>& items) {
            return il2cpp::array_new<app::SimpleSwayAnimPostprocess__Array>(get_class(), items);
        }
    } // namespace SimpleSwayAnimPostprocess
} // namespace app::classes::types
