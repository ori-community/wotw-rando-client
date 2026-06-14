#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NodeDataUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NodeDataUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NodeDataUI__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_NodeDataUI__Fields_DEFINED
struct BehaviourNode;
struct String;
struct __declspec(align(8)) NodeDataUI__Fields {
    struct BehaviourNode* m_node;
    int32_t m_ID;
    bool m_isCollapsed;
    struct Vector2 m_position;
    struct Vector2 m_size;
    struct Color m_nodeColor;
    struct String* m_name;
    struct String* m_comments;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NodeDataUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_NodeDataUI__Fields_FWDDECL
#include <Modloader/app/structs/BehaviourNode.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_NodeDataUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NodeDataUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NodeDataUI__Fields_FWDDECL)
#include <Modloader/app/structs/NodeDataUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NodeDataUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
