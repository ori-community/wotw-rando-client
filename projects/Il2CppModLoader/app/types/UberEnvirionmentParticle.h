#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberEnvirionmentParticle {
        namespace {
            app::UberEnvirionmentParticle__Class* type_info_ref = nullptr;
        }
        app::UberEnvirionmentParticle__Class** type_info = &type_info_ref;
        inline app::UberEnvirionmentParticle__Class* get_class() {
            return il2cpp::get_class<app::UberEnvirionmentParticle__Class>(type_info, "", "UberEnvirionmentParticle");
        }
        inline app::UberEnvirionmentParticle* create() {
            return il2cpp::create_object<app::UberEnvirionmentParticle>(get_class());
        }
    } // namespace UberEnvirionmentParticle
} // namespace app::classes::types
