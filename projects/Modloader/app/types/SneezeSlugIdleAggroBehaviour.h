#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SneezeSlugIdleAggroBehaviour__Class.h>
#include <Modloader/app/structs/SneezeSlugIdleAggroBehaviour.h>

namespace app::classes::types {
    namespace SneezeSlugIdleAggroBehaviour {
        namespace {
            inline app::SneezeSlugIdleAggroBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SneezeSlugIdleAggroBehaviour__Class** type_info = &type_info_ref;
        inline app::SneezeSlugIdleAggroBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugIdleAggroBehaviour__Class>(type_info, "", "SneezeSlugIdleAggroBehaviour");
        }
        inline app::SneezeSlugIdleAggroBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugIdleAggroBehaviour>(get_class());
        }
    } // namespace SneezeSlugIdleAggroBehaviour
} // namespace app::classes::types
