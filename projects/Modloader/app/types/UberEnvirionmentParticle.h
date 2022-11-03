#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberEnvirionmentParticle {
        namespace {
            inline app::UberEnvirionmentParticle__Class* type_info_ref = nullptr;
        }
        inline app::UberEnvirionmentParticle__Class** type_info = &type_info_ref;
        inline app::UberEnvirionmentParticle__Class* get_class() {
            return il2cpp::get_class<app::UberEnvirionmentParticle__Class>(type_info, "", "UberEnvirionmentParticle");
        }
        inline app::UberEnvirionmentParticle* create() {
            return il2cpp::create_object<app::UberEnvirionmentParticle>(get_class());
        }
    } // namespace UberEnvirionmentParticle
} // namespace app::classes::types
