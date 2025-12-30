#pragma once

#include <Core/macros.h>
#include <Modloader/app/methods/TranslatedMessageProvider.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/types/TranslatedMessageProvider.h>
#include <Modloader/app/types/TranslatedMessageProvider_MessageItem.h>
#include <Modloader/il2cpp_helpers.h>
#include <Profiler/tracy.h>

using namespace app::classes;

namespace core::api::system {
    CORE_DLLEXPORT app::TranslatedMessageProvider* instantiate_empty_translated_message_provider();

    template<typename T>
    void add_to_message_provider(app::TranslatedMessageProvider* provider, T message) {
        auto il2cpp_str = il2cpp::string_new(message);
        auto item = types::TranslatedMessageProvider_MessageItem::create();
        item->fields.English = il2cpp_str;
        item->fields.French = il2cpp_str;
        item->fields.Italian = il2cpp_str;
        item->fields.German = il2cpp_str;
        item->fields.Spanish = il2cpp_str;
        item->fields.Japanese = il2cpp_str;
        item->fields.Portuguese = il2cpp_str;
        item->fields.Chinese = il2cpp_str;
        item->fields.Russian = il2cpp_str;
        item->fields.TraditionalChinese = il2cpp_str;
        item->fields.Czech = il2cpp_str;
        item->fields.Danish = il2cpp_str;
        item->fields.Dutch = il2cpp_str;
        item->fields.Finnish = il2cpp_str;
        item->fields.Hungarian = il2cpp_str;
        item->fields.Korean = il2cpp_str;
        item->fields.Norwegian = il2cpp_str;
        item->fields.Polish = il2cpp_str;
        item->fields.SpanishSpain = il2cpp_str;
        item->fields.Swedish = il2cpp_str;
        item->fields.Turkish = il2cpp_str;

        item->fields.Sound = nullptr;
        item->fields.WWiseEvent = nullptr;
        item->fields.Emotion = app::EmotionType__Enum::Neutral;
        il2cpp::invoke(provider->fields.Messages, "Add", item);
    }

    template<typename T, typename... Args>
    void add_to_message_provider(app::TranslatedMessageProvider* provider, T message, Args... args) {
        add_to_message_provider(message);
        add_to_message_provider(provider, args...);
    }

    template<typename... Args>
    app::MessageProvider* create_message_provider(Args... args) {
        auto provider = instantiate_empty_translated_message_provider();
        add_to_message_provider(provider, args...);
        return reinterpret_cast<app::MessageProvider*>(provider);
    }

    template<typename T>
    app::MessageProvider* create_message_provider(std::vector<T> const& messages) {
        auto provider = instantiate_empty_translated_message_provider();
        for (auto const& message: messages) {
            add_to_message_provider(provider, message);
        }

        return reinterpret_cast<app::MessageProvider*>(provider);
    }
} // namespace core::api::system
