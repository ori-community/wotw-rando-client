#pragma once

#include <Il2CppModLoader\il2cpp_helpers.h>

namespace utils
{
    template<typename T>
    void add_to_message_provider(app::TranslatedMessageProvider* provider, T message)
    {
        auto il2cpp_str = il2cpp::string_new(message);
        auto item = il2cpp::create_object<app::TranslatedMessageProvider_MessageItem>("", "TranslatedMessageProvider", "MessageItem");
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
        item->fields.Emotion = app::EmotionType__Enum_Neutral;
        il2cpp::invoke(provider->fields.Messages, "Add", item);
    }

    template<typename T, typename... Args>
    void add_to_message_provider(app::TranslatedMessageProvider* provider, T message, Args... args)
    {
        add_to_message_provider(message);
        add_to_message_provider(provider, args...);
    }

    template<typename... Args>
    app::MessageProvider* create_message_provider(Args... args)
    {
        auto provider = il2cpp::unity::create_scriptable_object<app::TranslatedMessageProvider>("", "TranslatedMessageProvider");
        il2cpp::invoke(provider, ".ctor");
        add_to_message_provider(provider, args...);
        return reinterpret_cast<app::MessageProvider*>(provider);
    }

    template<typename T>
    app::MessageProvider* create_message_provider(std::vector<T> const& messages)
    {
        auto provider = il2cpp::unity::create_scriptable_object<app::TranslatedMessageProvider>("", "TranslatedMessageProvider");
        il2cpp::invoke(provider, ".ctor");
        for (auto const& message : messages)
            add_to_message_provider(provider, message);

        return reinterpret_cast<app::MessageProvider*>(provider);
    }
}
