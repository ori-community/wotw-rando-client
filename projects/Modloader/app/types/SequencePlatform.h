#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SequencePlatform {
        namespace {
            inline app::SequencePlatform__Class* type_info_ref = nullptr;
        }
        inline app::SequencePlatform__Class** type_info = &type_info_ref;
        inline app::SequencePlatform__Class* get_class() {
            return il2cpp::get_class<app::SequencePlatform__Class>(type_info, "", "SequencePlatform");
        }
        inline app::SequencePlatform* create() {
            return il2cpp::create_object<app::SequencePlatform>(get_class());
        }
        inline app::SequencePlatform__Array* create_array(int size) {
            return il2cpp::array_new<app::SequencePlatform__Array>(get_class(), size);
        }
        inline app::SequencePlatform__Array* create_array(const std::vector<app::SequencePlatform*>& items) {
            return il2cpp::array_new<app::SequencePlatform__Array>(get_class(), items);
        }
    } // namespace SequencePlatform
} // namespace app::classes::types
