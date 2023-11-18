#pragma once
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess.h>
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess__Array.h>
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleSwayBossAnimPostprocess {
        inline app::SimpleSwayBossAnimPostprocess__Class** type_info() {
            static app::SimpleSwayBossAnimPostprocess__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SimpleSwayBossAnimPostprocess__Class**)(modloader::win::memory::resolve_rva(0x04744F38));
            }
            return cache;
        }
        inline app::SimpleSwayBossAnimPostprocess__Class* get_class() {
            return il2cpp::get_class<app::SimpleSwayBossAnimPostprocess__Class>(type_info(), "Moon", "SimpleSwayBossAnimPostprocess");
        }
        inline app::SimpleSwayBossAnimPostprocess* create() {
            return il2cpp::create_object<app::SimpleSwayBossAnimPostprocess>(get_class());
        }
        inline app::SimpleSwayBossAnimPostprocess__Array* create_array(int size) {
            return il2cpp::array_new<app::SimpleSwayBossAnimPostprocess__Array>(get_class(), size);
        }
        inline app::SimpleSwayBossAnimPostprocess__Array* create_array(const std::vector<app::SimpleSwayBossAnimPostprocess*>& items) {
            return il2cpp::array_new<app::SimpleSwayBossAnimPostprocess__Array>(get_class(), items);
        }
    } // namespace SimpleSwayBossAnimPostprocess
} // namespace app::classes::types
