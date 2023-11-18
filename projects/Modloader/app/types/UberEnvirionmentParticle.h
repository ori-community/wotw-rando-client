#pragma once
#include <Modloader/app/structs/UberEnvirionmentParticle.h>
#include <Modloader/app/structs/UberEnvirionmentParticle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberEnvirionmentParticle {
        inline app::UberEnvirionmentParticle__Class** type_info() {
            static app::UberEnvirionmentParticle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberEnvirionmentParticle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberEnvirionmentParticle__Class* get_class() {
            return il2cpp::get_class<app::UberEnvirionmentParticle__Class>(type_info(), "", "UberEnvirionmentParticle");
        }
        inline app::UberEnvirionmentParticle* create() {
            return il2cpp::create_object<app::UberEnvirionmentParticle>(get_class());
        }
    } // namespace UberEnvirionmentParticle
} // namespace app::classes::types
