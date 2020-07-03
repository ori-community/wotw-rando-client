#include <dev/object_visualizer.h>
#include <common.h>
#include <interception_macros.h>

#include <unordered_map>

namespace dev
{
    namespace visualize
    {
        namespace {
            BINDING(27825008, System_Int32_array*, NewSetupStateController__GetAllStateGUIDs, (NewSetupStateController_o* this_ptr));
            BINDING(27824416, System_String_o*, NewSetupStateController__GetStateName, (NewSetupStateController_o* this_ptr, int32_t stateGUID));
            BINDING(29453088, bool, Moon_MoonReference_T___Resolve, (Moon_MoonReference_T__o* this_ptr, Moon_IMoonResolverContext_o* context, void* method));
            BINDING(29456192, bool, Moon_MoonReference_T___CanResolve, (Moon_MoonReference_T__o* this_ptr, Moon_IMoonResolverContext_o* context, void* method));
            BINDING(29455680, bool, Moon_MoonReference_T___TryResolve, (Il2CppClass* klass, Moon_MoonReference_T__o* this_ptr, Il2CppObject* value, Moon_IMoonResolverContext_o* context));
            BINDING(27824416, System_String_o*, SetupStateModifier__get_Name, (SetupStateModifier_o* this_ptr));
            BINDING(29452928, bool, Moon_MoonReference_T___get_HasAReference, (Moon_MoonReference_T__o* this_ptr));

            BINDING(13431104, System_String_o*, Moon_UberState__get_Name, (Moon_IUberState_o* this_ptr));
            BINDING(13431104, System_String_o*, Moon_UberStateGroup__get_GroupName, (Moon_UberStateGroup_o* this_ptr));
            BINDING(3013008, Moon_IUberStateGroup_o*, Moon_IUberState_ByteInt__get_UberStateGroup, (Moon_IUberState_o* this_ptr));
            BINDING(3013040, Moon_IUberStateGroup_o*, Moon_IUberState_BoolFloat__get_UberStateGroup, (Moon_IUberState_o* this_ptr));
            BINDING(3013040, Moon_UberID_o*, Moon_UberIDOwnerSO__get_ID, (Moon_UberIDOwnerSO_o* this_ptr));

            void indent(Visualizer& visualizer, int pre = 0, int post = 0)
            {
                visualizer.indent_level += pre;
                for (auto i = 0; i < visualizer.indent_level; ++i)
                    visualizer.stream << visualizer.indent;

                visualizer.indent_level += post;
            }

            Moon_IUberStateGroup_o* get_group(Moon_IUberState_o* state)
            {
                using get_uber_group = Moon_IUberStateGroup_o* (*)(Moon_IUberState_o*);
                VirtualInvokeData data;

                // TODO: Replace this with an actual virtual resolver.
                if (state->klass->_1.name == std::string("SerializedIntUberState"))
                    data = reinterpret_cast<Moon_SerializedIntUberState_o*>(state)->klass->vtable._10_get_UberStateGroup;
                else if (state->klass->_1.name == std::string("SerializedByteUberState"))
                    data = reinterpret_cast<Moon_SerializedByteUberState_o*>(state)->klass->vtable._10_get_UberStateGroup;
                else if (state->klass->_1.name == std::string("SerializedFloatUberState"))
                    data = reinterpret_cast<Moon_SerializedFloatUberState_o*>(state)->klass->vtable._10_get_UberStateGroup;
                else if (state->klass->_1.name == std::string("SerializedBooleanUberState"))
                    data = reinterpret_cast<Moon_SerializedBooleanUberState_o*>(state)->klass->vtable._10_get_UberStateGroup;

                return reinterpret_cast<get_uber_group>(data.methodPtr)(state);
            }

            void visualize_new_setup_state_controller(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto start_level = visualizer.indent_level;
                auto controller = reinterpret_cast<NewSetupStateController_o*>(obj);
                auto guid_str = convert_csstring(controller->m_guidStr);
                indent(visualizer, 0, 1);
                visualizer.stream << controller->klass->_1.name << " - " << guid_str.c_str() << visualizer.new_line;
                indent(visualizer);
                visualizer.stream << "active_state: " << controller->m_activeStateIndex << visualizer.new_line;
                indent(visualizer, 0, 1);
                visualizer.stream << "states:" << visualizer.new_line;
                auto all_states = NewSetupStateController__GetAllStateGUIDs(controller);
                for (auto i = 0; i < all_states->max_length; ++i)
                {
                    auto guid = all_states->m_Items[i];
                    auto csname = NewSetupStateController__GetStateName(controller, guid);
                    auto name = convert_csstring(csname);

                    indent(visualizer);
                    visualizer.stream << "-> " << guid << " : " << name.c_str() << visualizer.new_line;
                }

                // Disable this until we can figure out how to visualize this better.
                //indent(visualizer, -1, 1);
                //visualizer.stream << "modifiers:" << visualizer.new_line;
                //
                //for (auto i = 0; i < controller->StateHolder->Modifiers->_size; ++i)
                //{
                //    auto item = controller->StateHolder->Modifiers->_items->m_Items[i];
                //    if (item != nullptr)
                //        visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item));
                //}

                visualizer.indent_level = start_level;
            }

            void visualize_setup_state_modifier(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto start_level = visualizer.indent_level;
                auto item = reinterpret_cast<SetupStateModifier_o*>(obj);
                indent(visualizer, 0, 1);
                visualizer.stream << item->klass->_1.name << " - " << std::showbase << std::hex << item->ModifierGUID << visualizer.new_line;
                //indent(visualizer);
                //if (item->Target->m_canResolve && Moon_MoonReference_T___CanResolve(nullptr, reinterpret_cast<Moon_MoonReference_T__o*>(item->Target), nullptr))
                //{
                //    auto csname = SetupStateModifier__get_Name(item);
                //    visualizer.stream << convert_csstring(csname) << visualizer.new_line;
                //}
                //else
                //    visualizer.stream << "unresolvable target" << visualizer.new_line;

                indent(visualizer, 0, 1);
                visualizer.stream << "modifier_data:" << visualizer.new_line;
                for (auto i = 0; i < item->m_uberStateModifierDatas->_size; ++i)
                    if (item != nullptr)
                        visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->m_uberStateModifierDatas->_items->m_Items[i]));

                visualizer.indent_level = start_level;
            }

            void visualize_state_condition(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto start_level = visualizer.indent_level;
                auto item = reinterpret_cast<StateCondition_o*>(obj);
                indent(visualizer, 0, 1);
                visualizer.stream << item->klass->_1.name << visualizer.new_line;
                indent(visualizer, 0, 1);
                visualizer.stream << "desired_state:" << visualizer.new_line;
                visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->DesiredState));
                visualizer.indent_level = start_level;
            }

            void visualize_uber_state_boolean_condition(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto start_level = visualizer.indent_level;
                auto item = reinterpret_cast<UberStateBoolCondition_o*>(obj);
                indent(visualizer, 0, 1);
                visualizer.stream << item->klass->_1.name << visualizer.new_line;
                visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->BooleanDescriptor));
                indent(visualizer);
                visualizer.stream << "value: " << item->Value << visualizer.new_line;

                visualizer.indent_level = start_level;
            }

            void visualize_uber_state_value_condition(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto start_level = visualizer.indent_level;
                auto item = reinterpret_cast<UberStateValueCondition_o*>(obj);
                indent(visualizer, 0, 1);
                visualizer.stream << item->klass->_1.name << visualizer.new_line;
                auto moon_ref = reinterpret_cast<Moon_MoonReference_T__o*>(item->Descriptor);
                if (Moon_MoonReference_T___get_HasAReference(moon_ref) && Moon_MoonReference_T___CanResolve(moon_ref, nullptr, *reinterpret_cast<void**>(resolve_rva(71863728))))
                {
                    //auto descriptor = reinterpret_cast<Il2CppObject*>(Moon_MoonReference_T___Resolve(moon_ref, nullptr, *reinterpret_cast<void**>(resolve_rva(71608472))));
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
                visualizer.stream << "value: " << item->Value << visualizer.new_line;
                indent(visualizer);
                visualizer.stream << "mode: " << item->Compare << visualizer.new_line;

                visualizer.indent_level = start_level;
            }

            void visualize_desired_uber_state_composite(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto start_level = visualizer.indent_level;
                auto item = reinterpret_cast<DesiredUberStateComposite_o*>(obj);
                indent(visualizer, 0, 1);
                visualizer.stream << item->klass->_1.name << visualizer.new_line;
                indent(visualizer, 0, 1);
                visualizer.stream << "bools: {" << item->BoolRequirements->_size << "}" << visualizer.new_line;
                for (auto i = 0; i < item->BoolRequirements->_size; ++i)
                    visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->BoolRequirements->_items->m_Items[i]));

                indent(visualizer, -1, 1);
                visualizer.stream << "bytes: {" << item->BoolRequirements->_size << "}" << visualizer.new_line;
                for (auto i = 0; i < item->ByteRequirements->_size; ++i)
                    visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->ByteRequirements->_items->m_Items[i]));

                indent(visualizer, -1, 1);
                visualizer.stream << "floats: {" << item->BoolRequirements->_size << "}" << visualizer.new_line;
                for (auto i = 0; i < item->FloatRequirements->_size; ++i)
                    visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->FloatRequirements->_items->m_Items[i]));

                indent(visualizer, -1, 1);
                visualizer.stream << "ints: {" << item->BoolRequirements->_size << "}" << visualizer.new_line;
                for (auto i = 0; i < item->IntRequirements->_size; ++i)
                    visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->IntRequirements->_items->m_Items[i]));

                visualizer.indent_level = start_level;
            }
            //DesiredUberStateBool_c* klass;
            //void* monitor;
            //Moon_SerializedBooleanUberState_o* Descriptor;

            void visualize_desired_bool_uber_state(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto item = reinterpret_cast<DesiredUberStateBool_o*>(obj);
                visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->Descriptor));
                indent(visualizer);
                visualizer.stream << "desired_value: " << item->DesiredValue << visualizer.new_line;
            }

            void visualize_desired_byte_uber_state(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto item = reinterpret_cast<DesiredUberStateByte_o*>(obj);
                indent(visualizer);
                auto moon_ref = reinterpret_cast<Moon_MoonReference_T__o*>(item->State);
                if (Moon_MoonReference_T___get_HasAReference(moon_ref))
                {
                    visualizer.stream << "byte_uberstate: resolvable" << visualizer.new_line;
                }
                else
                    visualizer.stream << "byte_uberstate: unresolvable" << visualizer.new_line;

                indent(visualizer);
                visualizer.stream << "desired_value: " << item->DesiredStateValue << visualizer.new_line;
            }

            void visualize_desired_float_uber_state(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto item = reinterpret_cast<DesiredUberStateFloat_o*>(obj);
                visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->Descriptor));
                indent(visualizer);
                visualizer.stream << "desired_value: " << item->DesiredValue << visualizer.new_line;
            }

            void visualize_desired_int_uber_state(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto item = reinterpret_cast<DesiredUberStateInt_o*>(obj);
                visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->Descriptor));
                indent(visualizer);
                visualizer.stream << "desired_value: " << item->DesiredValue << visualizer.new_line;
            }

            void visualize_serialized_uber_state(Visualizer& visualizer, Moon_IUberState_o* state, Moon_IUberStateGroup_o* group)
            {
                auto start_level = visualizer.indent_level;
                auto csstate = Moon_UberState__get_Name(state);
                auto state_name = convert_csstring(csstate);
                auto csgroup = Moon_UberStateGroup__get_GroupName(reinterpret_cast<Moon_UberStateGroup_o*>(group));
                auto group_name = convert_csstring(csgroup);

                indent(visualizer, 0, 1);
                visualizer.stream << "bool_uber_state: {" << visualizer.new_line;
                indent(visualizer);
                auto state_id = Moon_UberIDOwnerSO__get_ID(reinterpret_cast<Moon_UberIDOwnerSO_o*>(state));
                visualizer.stream << state_name << "(" << state_id->m_id << ")" << visualizer.new_line;
                indent(visualizer, -1);
                auto group_id = Moon_UberIDOwnerSO__get_ID(reinterpret_cast<Moon_UberIDOwnerSO_o*>(group));
                visualizer.stream << group_name << "(" << group_id->m_id << ")" << visualizer.new_line;
                indent(visualizer);
                visualizer.stream << "}" << visualizer.new_line;

                visualizer.indent_level = start_level;
            }

            void visualize_bool_float_serialized_uber_state(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto item = reinterpret_cast<Moon_IUberState_o*>(obj);
                auto group = Moon_IUberState_BoolFloat__get_UberStateGroup(item);
                visualize_serialized_uber_state(visualizer, item, group);
            }

            void visualize_byte_int_serialized_uber_state(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto item = reinterpret_cast<Moon_IUberState_o*>(obj);
                auto group = Moon_IUberState_ByteInt__get_UberStateGroup(item);
                visualize_serialized_uber_state(visualizer, item, group);
            }

            std::unordered_map<std::string, void (*)(Visualizer& visualizer, Il2CppObject* obj)> visualizers = {
                { "NewSetupStateController", visualize_new_setup_state_controller },
                { "SetupStateModifier", visualize_setup_state_modifier },
                { "StateCondition", visualize_state_condition },

                { "UberStateBooleanCondition", visualize_uber_state_boolean_condition },
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
                auto it = visualizers.find(klass->_1.name);
                if (it != visualizers.end())
                {
                    it->second(visualizer, obj);
                    return;
                }

                klass = klass->_1.parent;
            }

            indent(visualizer);
            visualizer.stream << obj->klass->_1.name << " - " << std::noshowbase << std::dec << reinterpret_cast<uint64_t>(obj->klass) << visualizer.new_line;
        }

        std::string get_string(Visualizer& visualizer)
        {
            return visualizer.stream.str();
        }
    }
}
