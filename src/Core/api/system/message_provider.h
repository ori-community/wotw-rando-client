#pragma once

#include <Core/macros.h>
#include <Core/property.h>
#include <Modloader/app/methods/TranslatedMessageProvider.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/il2cpp_helpers.h>


using namespace app::classes;

namespace core::api::system {
    CORE_DLLEXPORT app::MessageProvider* create_message_provider(const Property<std::string>& property);
    CORE_DLLEXPORT app::MessageProvider* create_message_provider(std::string_view string);
} // namespace core::api::system
