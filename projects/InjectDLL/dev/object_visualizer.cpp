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
            BINDING(29456192, bool, Moon_MoonReference_T___CanResolve, (Moon_MoonReference_T__o* this_ptr, Moon_IMoonResolverContext_o* context));
            BINDING(27824416, System_String_o*, SetupStateModifier__get_Name, (SetupStateModifier_o* this_ptr));

            void indent(Visualizer& visualizer, int pre = 0, int post = 0)
            {
                visualizer.indent_level += pre;
                for (auto i = 0; i < visualizer.indent_level; ++i)
                    visualizer.stream << visualizer.indent;

                visualizer.indent_level += post;
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

                indent(visualizer, -1, 1);
                visualizer.stream << "modifiers:" << visualizer.new_line;

                for (auto i = 0; i < controller->StateHolder->Modifiers->_size; ++i)
                {
                    auto item = controller->StateHolder->Modifiers->_items->m_Items[i];
                    if (item != nullptr)
                        visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item));
                }

                visualizer.indent_level = start_level;
            }

            void visualize_setup_state_modifier(Visualizer& visualizer, Il2CppObject* obj)
            {
                auto start_level = visualizer.indent_level;
                auto item = reinterpret_cast<SetupStateModifier_o*>(obj);
                indent(visualizer, 0, 1);
                visualizer.stream << item->klass->_1.name << " - " << std::showbase << std::hex << item->ModifierGUID << visualizer.new_line;
                indent(visualizer);
                if (item->Target->m_canResolve && Moon_MoonReference_T___CanResolve(reinterpret_cast<Moon_MoonReference_T__o*>(item->Target), nullptr))
                {
                    auto csname = SetupStateModifier__get_Name(item);
                    visualizer.stream << convert_csstring(csname) << visualizer.new_line;
                }
                else
                    visualizer.stream << "unresolvable target" << visualizer.new_line;

                indent(visualizer, 0, 1);
                visualizer.stream << "modifier_data:" << visualizer.new_line;
                for (auto i = 0; i < item->m_uberStateModifierDatas->_size; ++i)
                    if (item != nullptr)
                        visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item->m_uberStateModifierDatas->_items->m_Items[i]));

                visualizer.indent_level = start_level;
            }

            std::unordered_map<std::string, void (*)(Visualizer& visualizer, Il2CppObject* obj)> visualizers = {
                { "NewSetupStateController", visualize_new_setup_state_controller },
                { "SetupStateModifier", visualize_setup_state_modifier },
            };
        }

        void visualize_object(Visualizer& visualizer, Il2CppObject* obj)
        {
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
