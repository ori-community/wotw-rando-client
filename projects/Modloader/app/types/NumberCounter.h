#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NumberCounter__Class.h>
#include <Modloader/app/structs/NumberCounter.h>

namespace app::classes::types {
    namespace NumberCounter {
        namespace {
            inline app::NumberCounter__Class* type_info_ref = nullptr;
        }
        inline app::NumberCounter__Class** type_info = &type_info_ref;
        inline app::NumberCounter__Class* get_class() {
            return il2cpp::get_class<app::NumberCounter__Class>(type_info, "", "NumberCounter");
        }
        inline app::NumberCounter* create() {
            return il2cpp::create_object<app::NumberCounter>(get_class());
        }
    } // namespace NumberCounter
} // namespace app::classes::types
