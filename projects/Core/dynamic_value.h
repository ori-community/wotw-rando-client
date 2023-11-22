#pragma once

#include <Common/registration_handle.h>

#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_condition.h>
#include <Core/text/text_database.h>
#include <Core/text/text_processor.h>

#include <Core/dynamic_value/base.h>
#include <Core/dynamic_value/bool.h>
#include <Core/dynamic_value/non_uber_state.h>
#include <Core/dynamic_value/string.h>
#include <Core/dynamic_value/uber_state.h>

#include <string>
#include <utility>
#include <variant>

namespace core {
    template <typename T>
    using set = dynamic_value::set<T>;

    template <typename T>
    using get = dynamic_value::get<T>;

    template <typename T>
    using set_get = dynamic_value::set_get<T>;

    template <typename T>
    using DynamicValue = dynamic_value::DynamicValue<T, true, true>;

    template <typename T>
    using ReadonlyDynamicValue = dynamic_value::DynamicValue<T, false, true>;

    template <typename T>
    using WriteonlyDynamicValue = dynamic_value::DynamicValue<T, true, false>;

    template <typename To, typename From>
    DynamicValue<To> wrap(DynamicValue<From> value) {
        return DynamicValue<To>(std::make_tuple(
            [value](auto v) mutable { value.template set<To>(static_cast<From>(v)); },
            [value]() { return static_cast<To>(value.get()); }
        ));
    }

    template <typename To, typename From, bool FromCanSet>
    ReadonlyDynamicValue<To> wrap_readonly(dynamic_value::DynamicValue<From, FromCanSet, true> value) {
        return ReadonlyDynamicValue<To>(typename ReadonlyDynamicValue<To>::value_type(
            [value]() { return static_cast<To>(value.get()); }
        ));
    }

    template <typename To, typename From, bool FromCanGet>
    WriteonlyDynamicValue<To> wrap_writeonly(dynamic_value::DynamicValue<From, true, FromCanGet> value) {
        return WriteonlyDynamicValue<To>(typename WriteonlyDynamicValue<To>::value_type(
            [value](auto v) mutable { value.template set<To>(static_cast<From>(v)); }
        ));
    }
} // namespace core
