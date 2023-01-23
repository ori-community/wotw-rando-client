#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChannelClamper__Class.h>
#include <Modloader/app/structs/ChannelClamper.h>

namespace app::classes::types {
    namespace ChannelClamper {
        namespace {
            inline app::ChannelClamper__Class* type_info_ref = nullptr;
        }
        inline app::ChannelClamper__Class** type_info = &type_info_ref;
        inline app::ChannelClamper__Class* get_class() {
            return il2cpp::get_class<app::ChannelClamper__Class>(type_info, "Colorful", "ChannelClamper");
        }
        inline app::ChannelClamper* create() {
            return il2cpp::create_object<app::ChannelClamper>(get_class());
        }
    } // namespace ChannelClamper
} // namespace app::classes::types
