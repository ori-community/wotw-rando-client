#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsObjectProcessor__Class.h>
#include <Modloader/app/structs/fsObjectProcessor.h>
#include <Modloader/app/structs/fsObjectProcessor__Array.h>

namespace app::classes::types {
    namespace fsObjectProcessor {
        inline app::fsObjectProcessor__Class** type_info = (app::fsObjectProcessor__Class**)(modloader::win::memory::resolve_rva(0x047993C0));
        inline app::fsObjectProcessor__Class* get_class() {
            return il2cpp::get_class<app::fsObjectProcessor__Class>(type_info, "FullSerializer", "fsObjectProcessor");
        }
        inline app::fsObjectProcessor* create() {
            return il2cpp::create_object<app::fsObjectProcessor>(get_class());
        }
        inline app::fsObjectProcessor__Array* create_array(int size) {
            return il2cpp::array_new<app::fsObjectProcessor__Array>(get_class(), size);
        }
        inline app::fsObjectProcessor__Array* create_array(const std::vector<app::fsObjectProcessor*>& items) {
            return il2cpp::array_new<app::fsObjectProcessor__Array>(get_class(), items);
        }
    } // namespace fsObjectProcessor
} // namespace app::classes::types
