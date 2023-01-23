#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedFog__Array__Class.h>
#include <Modloader/app/structs/PetrifiedFog__Array.h>

namespace app::classes::types {
    namespace PetrifiedFog__Array {
        namespace {
            inline app::PetrifiedFog__Array__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedFog__Array__Class** type_info = &type_info_ref;
        inline app::PetrifiedFog__Array__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedFog__Array__Class>(type_info, "", "PetrifiedFog[]");
        }
        inline app::PetrifiedFog__Array* create() {
            return il2cpp::create_object<app::PetrifiedFog__Array>(get_class());
        }
    } // namespace PetrifiedFog__Array
} // namespace app::classes::types
