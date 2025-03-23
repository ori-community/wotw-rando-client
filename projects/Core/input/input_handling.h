#pragma once

#include <Common/event_bus.h>
#include <Core/enums/actions.h>

namespace core::input {
  void set_action(Action action, bool value);
  std::string action_to_string(Action action);

  /**
   * \brief Input bus fires the Before event when pressing an action and After when releasing
   * \return
   */
  common::TimedEventBus<Action>& input_bus();

  /**
   * \brief Input bus fires the Before event when pressing an action and After when releasing
   * \return
   */
  common::TimedMultiEventBus<Action>& single_input_bus();

  bool is_pressed(Action action);
  bool is_just_pressed(Action action);
} // namespace core::input
