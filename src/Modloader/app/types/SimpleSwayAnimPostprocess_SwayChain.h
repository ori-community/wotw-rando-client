#pragma once
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_SwayChain.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_SwayChain__Array.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_SwayChain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleSwayAnimPostprocess_SwayChain {
        inline app::SimpleSwayAnimPostprocess_SwayChain__Class** type_info() {
            static app::SimpleSwayAnimPostprocess_SwayChain__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SimpleSwayAnimPostprocess_SwayChain__Class**)(modloader::win::memory::resolve_rva(0x0472D788));
            }
            return cache;
        }
        inline app::SimpleSwayAnimPostprocess_SwayChain__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleSwayAnimPostprocess_SwayChain__Class>(type_info(), "Moon", "SimpleSwayAnimPostprocess", "SwayChain");
        }
        inline app::SimpleSwayAnimPostprocess_SwayChain* create() {
            return il2cpp::create_object<app::SimpleSwayAnimPostprocess_SwayChain>(get_class());
        }
        inline app::SimpleSwayAnimPostprocess_SwayChain__Array* create_array(int size) {
            return il2cpp::array_new<app::SimpleSwayAnimPostprocess_SwayChain__Array>(get_class(), size);
        }
        inline app::SimpleSwayAnimPostprocess_SwayChain__Array* create_array(const std::vector<app::SimpleSwayAnimPostprocess_SwayChain*>& items) {
            return il2cpp::array_new<app::SimpleSwayAnimPostprocess_SwayChain__Array>(get_class(), items);
        }
    } // namespace SimpleSwayAnimPostprocess_SwayChain
} // namespace app::classes::types
