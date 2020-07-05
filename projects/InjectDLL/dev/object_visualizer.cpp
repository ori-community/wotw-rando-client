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
            BINDING(27824416, app::String*, SetupStateModifier__get_Name, (app::SetupStateModifier* this_ptr));

            BINDING(13431104, app::String*, Moon_UberState__get_Name, (app::IUberState* this_ptr));
            BINDING(13431104, app::String*, Moon_UberStateGroup__get_GroupName, (app::UberStateGroup* this_ptr));
            //{
            //  "Address": 48221264,
            //  "Name": "UnityEngine.Transform$$GetChild",
            //  "Signature": "UnityEngine_Transform_o* UnityEngine_Transform__GetChild (UnityEngine_Transform_o* this, int32_t index);"
            //},
            //{
            //  "Address": 48221360,
            //  "Name": "UnityEngine.Transform$$GetChildCount",
            //  "Signature": "int32_t UnityEngine_Transform__GetChildCount (UnityEngine_Transform_o* this);"
            //},
            //{
            //    "Address": 36928416,
            //        "Name" : "UnityEngine.GameObject$$get_transform",
            //        "Signature" : "UnityEngine_Transform_o* UnityEngine_GameObject__get_transform (UnityEngine_GameObject_o* this);"
            //},

            void indent(Visualizer& visualizer, int pre = 0, int post = 0)
            {
                visualizer.indent_level += pre;
                for (auto i = 0; i < visualizer.indent_level; ++i)
                    visualizer.stream << visualizer.indent;

                visualizer.indent_level += post;
            }

            app::IUberStateGroup* get_group(app::IUberState* state)
            {
                return il2cpp::invoke_virtual<app::IUberStateGroup>(state, il2cpp::get_class("Moon", "IUberState"), "get_UberStateGroup");
            }

            void visualize_game_object(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto start_level = visualizer.indent_level;
                auto game_object = reinterpret_cast<app::GameObject*>(obj);
                auto name = il2cpp::unity::get_object_name(game_object);
                indent(visualizer);
                visualizer.stream << game_object->klass->_0.name << " - " << name << visualizer.new_line;

                visualizer.indent_level = start_level;
            }

            void visualize_new_setup_state_controller(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto start_level = visualizer.indent_level;
                auto controller = reinterpret_cast<app::NewSetupStateController*>(obj);
                auto guid_str = convert_csstring(controller->fields.m_guidStr);
                indent(visualizer, 0, 1);
                visualizer.stream << controller->klass->_0.name << " - " << guid_str << visualizer.new_line;
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

                if (visualizer.level > Visualizer::InfoLevel::Low)
                {
                    indent(visualizer, -1, 1);
                    visualizer.stream << "modifiers:" << visualizer.new_line;

                    for (auto i = 0; i < controller->fields.StateHolder->fields.Modifiers->fields._size; ++i)
                    {
                        auto item = controller->fields.StateHolder->fields.Modifiers->fields._items->vector[i];
                        if (item != nullptr)
                            visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item));
                    }
                }

                visualizer.indent_level = start_level;
            }

            void visualize_setup_state_modifier(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto start_level = visualizer.indent_level;
                auto item = reinterpret_cast<app::SetupStateModifier*>(obj);
                indent(visualizer, 0, 1);
                visualizer.stream << item->klass->_0.name << " - " << std::showbase << std::hex << item->fields.ModifierGUID << visualizer.new_line;
                auto csname = il2cpp::invoke<app::String>(item, "get_Name");
                auto name = convert_csstring(csname);

                indent(visualizer);
                visualizer.stream << "name: " << name << visualizer.new_line;

                if (item->fields.Target != nullptr &&
                    il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "get_HasAReference")->fields &&
                    il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "CanResolve", nullptr)->fields)
                {
                    auto target = il2cpp::invoke<Il2CppObject>(item->fields.Target, "Resolve", nullptr);
                    visualize_object(visualizer, target);
                }
                else
                {
                    indent(visualizer);
                    visualizer.stream << "unresolvable target" << visualizer.new_line;
                }

                indent(visualizer, 0, 1);
                visualizer.stream << "modifier_data:" << visualizer.new_line;
                for (auto i = 0; i < item->fields.m_uberStateModifierDatas->fields._size; ++i)
                    if (item != nullptr)
                        visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->fields.m_uberStateModifierDatas->fields._items->vector[i]));

                visualizer.indent_level = start_level;
            }

            void visualize_setup_state_modifier_data(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto start_level = visualizer.indent_level;
                auto item = reinterpret_cast<app::SetupStateModifierData*>(obj);
                indent(visualizer, 0, 1);
                visualizer.stream << item->klass->_0.name << " - " << std::showbase << std::hex << item->fields.ModifierGUID << visualizer.new_line;

                //item->fields.m_modifierDataClassID.

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
                    il2cpp::invoke<app::Boolean__Boxed>(item->fields.Descriptor, "get_HasAReference")->fields &&
                    il2cpp::invoke<app::Boolean__Boxed>(item->fields.Descriptor, "CanResolve", nullptr)->fields)
                {
                    auto descriptor = il2cpp::invoke<Il2CppObject>(item->fields.Descriptor, "Resolve", nullptr);
                    if (descriptor != nullptr)
                        visualize_object(visualizer, descriptor);
                    else
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
                auto start_level = visualizer.indent_level;
                auto item = reinterpret_cast<app::DesiredUberStateByte*>(obj);
                indent(visualizer, 0, 1);
                visualizer.stream << "byte_uberstate:" << visualizer.new_line;

                if (item->fields.State != nullptr &&
                    il2cpp::invoke<app::Boolean__Boxed>(item->fields.State, "get_HasAReference")->fields &&
                    il2cpp::invoke<app::Boolean__Boxed>(item->fields.State, "CanResolve", nullptr)->fields)
                {
                    auto descriptor = il2cpp::invoke<Il2CppObject>(item->fields.State, "Resolve", nullptr);
                    visualize_object(visualizer, descriptor);
                }
                else
                {
                    indent(visualizer);
                    visualizer.stream << "byte_uberstate: unresolvable" << visualizer.new_line;
                }

                indent(visualizer);
                visualizer.stream << "desired_value: " << item->fields.DesiredStateValue << visualizer.new_line;
                visualizer.indent_level = start_level;
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

            void visualize_serialized_uber_state(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto state = reinterpret_cast<app::IUberState*>(obj);
                auto start_level = visualizer.indent_level;
                auto csstate = Moon_UberState__get_Name(state);
                auto state_name = convert_csstring(csstate);
                auto group = il2cpp::invoke<app::IUberStateGroup>(state, "get_UberStateGroup");
                auto csgroup = Moon_UberStateGroup__get_GroupName(reinterpret_cast<app::UberStateGroup*>(group));
                auto group_name = convert_csstring(csgroup);

                indent(visualizer);
                visualizer.stream << "bool_uber_state: {" << visualizer.new_line;
                indent(visualizer, 1);
                auto state_id = il2cpp::invoke<app::UberID>(state, "get_ID");
                visualizer.stream << state_name << "(" << state_id->fields.m_id << ")" << visualizer.new_line;
                indent(visualizer);
                auto group_id = il2cpp::invoke<app::UberID>(group, "get_ID");
                visualizer.stream << group_name << "(" << group_id->fields.m_id << ")" << visualizer.new_line;
                indent(visualizer, -1);
                visualizer.stream << "}" << visualizer.new_line;

                visualizer.indent_level = start_level;
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

                { "SerializedBooleanUberState", visualize_serialized_uber_state },
                { "SerializedFloatUberState", visualize_serialized_uber_state },
                { "SerializedByteUberState", visualize_serialized_uber_state },
                { "SerializedIntUberState", visualize_serialized_uber_state },

                { "GameObject", visualize_game_object },
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
