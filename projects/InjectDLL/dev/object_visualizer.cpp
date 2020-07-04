#include <dev/object_visualizer.h>
#include <common.h>
#include <interception_macros.h>
#include <il2cpp_helpers.h>

#include <unordered_map>

namespace dev
{
    namespace visualize
    {
        namespace {
            BINDING(27825008, app::Int32__Array*, NewSetupStateController__GetAllStateGUIDs, (app::NewSetupStateController* this_ptr));
            BINDING(27824416, app::String*, NewSetupStateController__GetStateName, (app::NewSetupStateController* this_ptr, int32_t stateGUID));
            BINDING(29453088, bool, Moon_MoonReference_T___Resolve, (void* this_ptr, app::IMoonResolverContext* context, void* method));
            BINDING(29456192, bool, Moon_MoonReference_T___CanResolve, (void* this_ptr, app::IMoonResolverContext* context, void* method));
            BINDING(29455680, bool, Moon_MoonReference_T___TryResolve, (Il2CppClass* klass, void* this_ptr, Il2CppObject* value, app::IMoonResolverContext* context));
            BINDING(27824416, app::String*, SetupStateModifier__get_Name, (app::SetupStateModifier* this_ptr));
            BINDING(29452928, bool, Moon_MoonReference_T___get_HasAReference, (void* this_ptr));

            BINDING(13431104, app::String*, Moon_UberState__get_Name, (app::IUberState* this_ptr));
            BINDING(13431104, app::String*, Moon_UberStateGroup__get_GroupName, (app::UberStateGroup* this_ptr));
            BINDING(3013008, app::IUberStateGroup*, Moon_IUberState_ByteInt__get_UberStateGroup, (app::IUberState* this_ptr));
            BINDING(3013040, app::IUberStateGroup*, Moon_IUberState_BoolFloat__get_UberStateGroup, (app::IUberState* this_ptr));
            BINDING(3013040, app::UberID*, Moon_UberIDOwnerSO__get_ID, (app::UberIDOwnerSO* this_ptr));

            void indent(Visualizer& visualizer, int pre = 0, int post = 0)
            {
                visualizer.indent_level += pre;
                for (auto i = 0; i < visualizer.indent_level; ++i)
                    visualizer.stream << visualizer.indent;

                visualizer.indent_level += post;
            }

            app::IUberStateGroup* get_group(app::IUberState* state)
            {
                using get_uber_group = app::IUberStateGroup* (*)(app::IUberState*);
                VirtualInvokeData data;
                //auto group = reinterpret_cast<app::IUberStateGroup*>(
                //    il2cpp::invoke_virtual(state, il2cpp::get_class("Moon", "IUberState"), "get_UberStateGroup")
                //);

                // TODO: Replace this with an actual virtual resolver.
                if (state->klass->_0.name == std::string("SerializedIntUberState"))
                    data = reinterpret_cast<app::SerializedIntUberState*>(state)->klass->vtable.get_UberStateGroup;
                else if (state->klass->_0.name == std::string("SerializedByteUberState"))
                    data = reinterpret_cast<app::SerializedByteUberState*>(state)->klass->vtable.get_UberStateGroup;
                else if (state->klass->_0.name == std::string("SerializedFloatUberState"))
                    data = reinterpret_cast<app::SerializedFloatUberState*>(state)->klass->vtable.get_UberStateGroup;
                else if (state->klass->_0.name == std::string("SerializedBooleanUberState"))
                    data = reinterpret_cast<app::SerializedBooleanUberState*>(state)->klass->vtable.get_UberStateGroup;

                return reinterpret_cast<get_uber_group>(data.methodPtr)(state);
            }

            void visualize_new_setup_state_controller(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto start_level = visualizer.indent_level;
                auto controller = reinterpret_cast<app::NewSetupStateController*>(obj);
                auto guid_str = convert_csstring(controller->fields.m_guidStr);
                indent(visualizer, 0, 1);
                visualizer.stream << controller->klass->_0.name << " - " << guid_str.c_str() << visualizer.new_line;
                indent(visualizer);
                visualizer.stream << "active_state: " << controller->fields.m_activeStateIndex << visualizer.new_line;
                indent(visualizer, 0, 1);
                visualizer.stream << "states:" << visualizer.new_line;
                auto all_states = NewSetupStateController__GetAllStateGUIDs(controller);
                for (auto i = 0; i < all_states->max_length; ++i)
                {
                    auto guid = all_states->vector[i];
                    auto csname = NewSetupStateController__GetStateName(controller, guid);
                    auto name = convert_csstring(csname);

                    indent(visualizer);
                    visualizer.stream << "-> " << guid << " : " << name.c_str() << visualizer.new_line;
                }

                // Disable this until we can figure out how to visualize this better.
                indent(visualizer, -1, 1);
                visualizer.stream << "modifiers:" << visualizer.new_line;

                for (auto i = 0; i < controller->fields.StateHolder->fields.Modifiers->fields._size; ++i)
                {
                    auto item = controller->fields.StateHolder->fields.Modifiers->fields._items->vector[i];
                    if (item != nullptr)
                        visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item));
                }

                visualizer.indent_level = start_level;
            }

            void visualize_setup_state_modifier(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto start_level = visualizer.indent_level;
                auto item = reinterpret_cast<app::SetupStateModifier*>(obj);
                indent(visualizer, 0, 1);
                visualizer.stream << item->klass->_0.name << " - " << std::showbase << std::hex << item->fields.ModifierGUID << visualizer.new_line;
                indent(visualizer);
                auto moon_ref = reinterpret_cast<void*>(item->fields.Target);
                auto generic_address = 71539072;
                if (moon_ref != nullptr &&
                    Moon_MoonReference_T___get_HasAReference(moon_ref) &&
                    Moon_MoonReference_T___CanResolve(moon_ref, nullptr, il2cpp::resolve_generic_method(generic_address)))
                {
                    auto resolved_target = reinterpret_cast<app::GameObject*>(Moon_MoonReference_T___Resolve(moon_ref, nullptr, il2cpp::resolve_generic_method(71608472)));
                    auto csname = SetupStateModifier__get_Name(item);
                    visualizer.stream << convert_csstring(csname) << visualizer.new_line;
                }
                else
                    visualizer.stream << "unresolvable target" << visualizer.new_line;

                indent(visualizer, 0, 1);
                visualizer.stream << "modifier_data:" << visualizer.new_line;
                for (auto i = 0; i < item->fields.m_uberStateModifierDatas->fields._size; ++i)
                    if (item != nullptr)
                        visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->fields.m_uberStateModifierDatas->fields._items->vector[i]));

                visualizer.indent_level = start_level;
            }

            void visualize_state_condition(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto start_level = visualizer.indent_level;
                auto item = reinterpret_cast<app::StateCondition*>(obj);
                indent(visualizer, 0, 1);
                visualizer.stream << item->klass->_0.name << visualizer.new_line;
                indent(visualizer, 0, 1);
                visualizer.stream << "desired_state:" << visualizer.new_line;
                visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->fields.DesiredState));
                visualizer.indent_level = start_level;
            }

            void visualize_uber_state_bool_condition(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto start_level = visualizer.indent_level;
                auto item = reinterpret_cast<app::UberStateBoolCondition*>(obj);
                indent(visualizer, 0, 1);
                visualizer.stream << item->klass->_0.name << visualizer.new_line;
                visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->fields.BooleanDescriptor));
                indent(visualizer);
                visualizer.stream << "value: " << item->fields.Value << visualizer.new_line;

                visualizer.indent_level = start_level;
            }

            void visualize_uber_state_value_condition(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto start_level = visualizer.indent_level;
                auto item = reinterpret_cast<app::UberStateValueCondition*>(obj);
                indent(visualizer, 0, 1);
                visualizer.stream << item->klass->_0.name << visualizer.new_line;
                if (item->fields.Descriptor != nullptr &&
                    Moon_MoonReference_T___get_HasAReference(item->fields.Descriptor) &&
                    Moon_MoonReference_T___CanResolve(item->fields.Descriptor, nullptr, il2cpp::resolve_generic_method(71863728)))
                {
                    //auto descriptor = reinterpret_cast<Il2CppObject*>(Moon_MoonReference_T___Resolve(moon_ref, nullptr, il2cpp::resolve_generic_method(71608472)));
                    //if (descriptor != nullptr)
                    //    visualize_object(visualizer, descriptor);
                    //else
                    {
                        indent(visualizer);
                        visualizer.stream << "descriptor: resolved but empty" << visualizer.new_line;
                    }

                }
                else
                {
                    indent(visualizer);
                    visualizer.stream << "descriptor: unresolved" << visualizer.new_line;
                }

                indent(visualizer);
                visualizer.stream << "value: " << item->fields.Value << visualizer.new_line;
                indent(visualizer);
                visualizer.stream << "mode: " << item->fields.Compare << visualizer.new_line;

                visualizer.indent_level = start_level;
            }

            void visualize_desired_uber_state_composite(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto start_level = visualizer.indent_level;
                auto item = reinterpret_cast<app::DesiredUberStateComposite*>(obj);
                indent(visualizer, 0, 1);
                visualizer.stream << item->klass->_0.name << visualizer.new_line;
                indent(visualizer, 0, 1);
                visualizer.stream << "bools: {" << item->fields.BoolRequirements->fields._size << "}" << visualizer.new_line;
                for (auto i = 0; i < item->fields.BoolRequirements->fields._size; ++i)
                    visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->fields.BoolRequirements->fields._items->vector[i]));

                indent(visualizer, -1, 1);
                visualizer.stream << "bytes: {" << item->fields.ByteRequirements->fields._size << "}" << visualizer.new_line;
                for (auto i = 0; i < item->fields.ByteRequirements->fields._size; ++i)
                    visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->fields.ByteRequirements->fields._items->vector[i]));

                indent(visualizer, -1, 1);
                visualizer.stream << "floats: {" << item->fields.FloatRequirements->fields._size << "}" << visualizer.new_line;
                for (auto i = 0; i < item->fields.FloatRequirements->fields._size; ++i)
                    visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->fields.FloatRequirements->fields._items->vector[i]));

                indent(visualizer, -1, 1);
                visualizer.stream << "ints: {" << item->fields.IntRequirements->fields._size << "}" << visualizer.new_line;
                for (auto i = 0; i < item->fields.IntRequirements->fields._size; ++i)
                    visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->fields.IntRequirements->fields._items->vector[i]));

                visualizer.indent_level = start_level;
            }

            void visualize_desired_bool_uber_state(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto item = reinterpret_cast<app::DesiredUberStateBool*>(obj);
                visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->fields._.Descriptor));
                indent(visualizer);
                visualizer.stream << "desired_value: " << item->fields.DesiredValue << visualizer.new_line;
            }

            void visualize_desired_byte_uber_state(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto item = reinterpret_cast<app::DesiredUberStateByte*>(obj);
                indent(visualizer);
                if (Moon_MoonReference_T___get_HasAReference(item->fields.State))
                    visualizer.stream << "byte_uberstate: resolvable" << visualizer.new_line;
                else
                    visualizer.stream << "byte_uberstate: unresolvable" << visualizer.new_line;

                indent(visualizer);
                visualizer.stream << "desired_value: " << item->fields.DesiredStateValue << visualizer.new_line;
            }

            void visualize_desired_float_uber_state(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto item = reinterpret_cast<app::DesiredUberStateFloat*>(obj);
                visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->fields.Descriptor));
                indent(visualizer);
                visualizer.stream << "desired_value: " << item->fields.DesiredValue << visualizer.new_line;
            }

            void visualize_desired_int_uber_state(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto item = reinterpret_cast<app::DesiredUberStateInt*>(obj);
                visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->fields.Descriptor));
                indent(visualizer);
                visualizer.stream << "desired_value: " << item->fields.DesiredValue << visualizer.new_line;
            }

            void visualize_serialized_uber_state(Visualizer& visualizer, app::IUberState* state, app::IUberStateGroup* group)
            {
                auto start_level = visualizer.indent_level;
                auto csstate = Moon_UberState__get_Name(state);
                auto state_name = convert_csstring(csstate);
                auto csgroup = Moon_UberStateGroup__get_GroupName(reinterpret_cast<app::UberStateGroup*>(group));
                auto group_name = convert_csstring(csgroup);

                indent(visualizer, 0, 1);
                visualizer.stream << "bool_uber_state: {" << visualizer.new_line;
                indent(visualizer);
                auto state_id = Moon_UberIDOwnerSO__get_ID(reinterpret_cast<app::UberIDOwnerSO*>(state));
                visualizer.stream << state_name << "(" << state_id->fields.m_id << ")" << visualizer.new_line;
                indent(visualizer, -1);
                auto group_id = Moon_UberIDOwnerSO__get_ID(reinterpret_cast<app::UberIDOwnerSO*>(group));
                visualizer.stream << group_name << "(" << group_id->fields.m_id << ")" << visualizer.new_line;
                indent(visualizer);
                visualizer.stream << "}" << visualizer.new_line;

                visualizer.indent_level = start_level;
            }

            void visualize_bool_float_serialized_uber_state(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto item = reinterpret_cast<app::IUberState*>(obj);
                auto group = Moon_IUberState_BoolFloat__get_UberStateGroup(item);
                visualize_serialized_uber_state(visualizer, item, group);
            }

            void visualize_byte_int_serialized_uber_state(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto item = reinterpret_cast<app::IUberState*>(obj);
                auto group = Moon_IUberState_ByteInt__get_UberStateGroup(item);
                visualize_serialized_uber_state(visualizer, item, group);
            }

            std::unordered_map<std::string, void (*)(Visualizer& visualizer, Il2CppObject* obj)> visualizers = {
                { "NewSetupStateController", visualize_new_setup_state_controller },
                { "SetupStateModifier", visualize_setup_state_modifier },
                { "StateCondition", visualize_state_condition },

                { "UberStateBoolCondition", visualize_uber_state_bool_condition },
                { "UberStateValueCondition", visualize_uber_state_value_condition },

                { "DesiredUberStateComposite", visualize_desired_uber_state_composite },
                { "DesiredUberStateBool", visualize_desired_bool_uber_state },
                { "DesiredUberStateFloat", visualize_desired_float_uber_state },
                { "DesiredUberStateByte", visualize_desired_byte_uber_state },
                { "DesiredUberStateInt", visualize_desired_int_uber_state },

                { "SerializedBooleanUberState", visualize_bool_float_serialized_uber_state },
                { "SerializedFloatUberState", visualize_bool_float_serialized_uber_state },
                { "SerializedByteUberState", visualize_byte_int_serialized_uber_state },
                { "SerializedIntUberState", visualize_byte_int_serialized_uber_state },
            };
        }

        void visualize_object(Visualizer& visualizer, Il2CppObject* obj)
        {
            if (obj == nullptr)
            {
                indent(visualizer);
                visualizer.stream << "nullptr" << visualizer.new_line;
                return;
            }

            Il2CppClass* klass = obj->klass;
            while (klass != nullptr)
            {
                auto it = visualizers.find(klass->name);
                if (it != visualizers.end())
                {
                    it->second(visualizer, obj);
                    return;
                }

                klass = klass->parent;
            }

            indent(visualizer);
            visualizer.stream << obj->klass->name << " - " << std::noshowbase << std::dec << reinterpret_cast<uint64_t>(obj->klass) << visualizer.new_line;
        }

        std::string get_string(Visualizer& visualizer)
        {
            return visualizer.stream.str();
        }
    }
}
