#pragma once

#include <Common/event_bus.h>
#include <Core/enums/actions.h>
#include <Core/macros.h>

namespace core::input {
  CORE_DLLEXPORT void set_action(Action action, bool value);
  CORE_DLLEXPORT std::string action_to_string(Action action);

  /**
   * \brief Input bus fires the Before event when pressing an action and After when releasing
   * \return
   */
  CORE_DLLEXPORT common::TimedEventBus<Action>& input_bus();

  /**
   * \brief Input bus fires the Before event when pressing an action and After when releasing
   * \return
   */
  CORE_DLLEXPORT common::TimedMultiEventBus<Action>& single_input_bus();

  CORE_DLLEXPORT bool is_pressed(Action action);
  CORE_DLLEXPORT bool is_just_pressed(Action action);
} // namespace core::input
