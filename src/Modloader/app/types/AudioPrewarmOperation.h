#pragma once
#include <Modloader/app/structs/AudioPrewarmOperation.h>
#include <Modloader/app/structs/AudioPrewarmOperation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioPrewarmOperation {
        inline app::AudioPrewarmOperation__Class** type_info() {
            static app::AudioPrewarmOperation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AudioPrewarmOperation__Class**)(modloader::win::memory::resolve_rva(0x04765690));
            }
            return cache;
        }
        inline app::AudioPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::AudioPrewarmOperation__Class>(type_info(), "frameworks.loading.Prewarmers", "AudioPrewarmOperation");
        }
        inline app::AudioPrewarmOperation* create() {
            return il2cpp::create_object<app::AudioPrewarmOperation>(get_class());
        }
    } // namespace AudioPrewarmOperation
} // namespace app::classes::types
