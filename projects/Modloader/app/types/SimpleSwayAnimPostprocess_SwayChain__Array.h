#pragma once
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_SwayChain__Array.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_SwayChain__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleSwayAnimPostprocess_SwayChain__Array {
        inline app::SimpleSwayAnimPostprocess_SwayChain__Array__Class** type_info() {
            static app::SimpleSwayAnimPostprocess_SwayChain__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SimpleSwayAnimPostprocess_SwayChain__Array__Class**)(modloader::win::memory::resolve_rva(0x04765840));
            }
            return cache;
        }
        inline app::SimpleSwayAnimPostprocess_SwayChain__Array__Class* get_class() {
            return il2cpp::get_class<app::SimpleSwayAnimPostprocess_SwayChain__Array__Class>(type_info(), "Moon", "SimpleSwayAnimPostprocess+SwayChain[]");
        }
        inline app::SimpleSwayAnimPostprocess_SwayChain__Array* create() {
            return il2cpp::create_object<app::SimpleSwayAnimPostprocess_SwayChain__Array>(get_class());
        }
    } // namespace SimpleSwayAnimPostprocess_SwayChain__Array
} // namespace app::classes::types
