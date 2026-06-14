#pragma once
#include <Modloader/app/structs/ParticleContentValidator.h>
#include <Modloader/app/structs/ParticleContentValidator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleContentValidator {
        inline app::ParticleContentValidator__Class** type_info() {
            static app::ParticleContentValidator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ParticleContentValidator__Class**)(modloader::win::memory::resolve_rva(0x04766B18));
            }
            return cache;
        }
        inline app::ParticleContentValidator__Class* get_class() {
            return il2cpp::get_class<app::ParticleContentValidator__Class>(type_info(), "System.Xml.Schema", "ParticleContentValidator");
        }
        inline app::ParticleContentValidator* create() {
            return il2cpp::create_object<app::ParticleContentValidator>(get_class());
        }
    } // namespace ParticleContentValidator
} // namespace app::classes::types
