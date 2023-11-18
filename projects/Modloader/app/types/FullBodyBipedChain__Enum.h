#pragma once
#include <Modloader/app/structs/FullBodyBipedChain__Enum.h>
#include <Modloader/app/structs/FullBodyBipedChain__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FullBodyBipedChain__Enum {
        inline app::FullBodyBipedChain__Enum__Class** type_info() {
            static app::FullBodyBipedChain__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FullBodyBipedChain__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FullBodyBipedChain__Enum__Class* get_class() {
            return il2cpp::get_class<app::FullBodyBipedChain__Enum__Class>(type_info(), "RootMotion.FinalIK", "FullBodyBipedChain");
        }
        inline app::FullBodyBipedChain__Enum* create() {
            return il2cpp::create_object<app::FullBodyBipedChain__Enum>(get_class());
        }
    } // namespace FullBodyBipedChain__Enum
} // namespace app::classes::types
