#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BitSet.h>
#include <Modloader/app/structs/BitSet__Array.h>
#include <Modloader/app/structs/ContentValidator.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/Int32__Array__Array.h>
#include <Modloader/app/structs/InteriorNode.h>
#include <Modloader/app/structs/NamespaceList.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ParticleContentValidator.h>
#include <Modloader/app/structs/SyntaxTreeNode.h>
#include <Modloader/app/structs/ValidationState.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaContentType__Enum.h>

namespace app::classes::System::Xml::Schema::ParticleContentValidator {
    IL2CPP_REGISTER_METHOD(0x016D5510, void, ctor_1, app::ParticleContentValidator* this_ptr, app::XmlSchemaContentType__Enum content_type)
    IL2CPP_REGISTER_METHOD(
        0x016D5520,
        void,
        ctor_2,
        app::ParticleContentValidator* this_ptr,
        app::XmlSchemaContentType__Enum content_type,
        bool enable_upa_check
    )
    IL2CPP_REGISTER_METHOD(0x016D55D0, void, InitValidation, app::ParticleContentValidator* this_ptr, app::ValidationState* context)
    IL2CPP_REGISTER_METHOD(
        0x016D5620,
        app::Object*,
        ValidateElement,
        app::ParticleContentValidator* this_ptr,
        app::XmlQualifiedName* name,
        app::ValidationState* context,
        int32_t* error_code
    )
    IL2CPP_REGISTER_METHOD(0x016D5670, bool, CompleteValidation, app::ParticleContentValidator* this_ptr, app::ValidationState* context)
    IL2CPP_REGISTER_METHOD(0x016D56C0, void, Start, app::ParticleContentValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016D5AC0, void, OpenGroup, app::ParticleContentValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016D5AF0, void, CloseGroup, app::ParticleContentValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016D5C90, bool, Exists, app::ParticleContentValidator* this_ptr, app::XmlQualifiedName* name)
    IL2CPP_REGISTER_METHOD(0x016D5CD0, void, AddName, app::ParticleContentValidator* this_ptr, app::XmlQualifiedName* name, app::Object* particle)
    IL2CPP_REGISTER_METHOD(
        0x016D5E70,
        void,
        AddNamespaceList,
        app::ParticleContentValidator* this_ptr,
        app::NamespaceList* namespace_list,
        app::Object* particle
    )
    IL2CPP_REGISTER_METHOD(0x016D6000, void, AddLeafNode, app::ParticleContentValidator* this_ptr, app::SyntaxTreeNode* node)
    IL2CPP_REGISTER_METHOD(0x016D6150, void, AddChoice, app::ParticleContentValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016D6330, void, AddSequence, app::ParticleContentValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016D6510, void, AddStar, app::ParticleContentValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016D6660, void, AddPlus, app::ParticleContentValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016D67B0, void, AddQMark, app::ParticleContentValidator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016D6900, void, AddLeafRange, app::ParticleContentValidator* this_ptr, app::Decimal min, app::Decimal max)
    IL2CPP_REGISTER_METHOD(0x016D6B60, void, Closure, app::ParticleContentValidator* this_ptr, app::InteriorNode* node)
    IL2CPP_REGISTER_METHOD(0x016D6D50, app::ContentValidator*, Finish, app::ParticleContentValidator* this_ptr, bool use_d_f_a)
    IL2CPP_REGISTER_METHOD(
        0x016D7C50,
        app::BitSet__Array*,
        CalculateTotalFollowposForRangeNodes,
        app::ParticleContentValidator* this_ptr,
        app::BitSet* firstpos,
        app::BitSet__Array* followpos,
        app::BitSet** pos_with_range_terminals
    )
    IL2CPP_REGISTER_METHOD(0x016D8160, void, CheckCMUPAWithLeafRangeNodes, app::ParticleContentValidator* this_ptr, app::BitSet* curpos)
    IL2CPP_REGISTER_METHOD(
        0x016D8350,
        app::BitSet*,
        GetApplicableMinMaxFollowPos,
        app::ParticleContentValidator* this_ptr,
        app::BitSet* curpos,
        app::BitSet* pos_with_range_terminals,
        app::BitSet__Array* minmax_follow_pos
    )
    IL2CPP_REGISTER_METHOD(
        0x016D8610,
        void,
        CheckUniqueParticleAttribution_1,
        app::ParticleContentValidator* this_ptr,
        app::BitSet* firstpos,
        app::BitSet__Array* followpos
    )
    IL2CPP_REGISTER_METHOD(0x016D86D0, void, CheckUniqueParticleAttribution_2, app::ParticleContentValidator* this_ptr, app::BitSet* curpos)
    IL2CPP_REGISTER_METHOD(
        0x016D8940,
        app::Int32__Array__Array*,
        BuildTransitionTable,
        app::ParticleContentValidator* this_ptr,
        app::BitSet* firstpos,
        app::BitSet__Array* followpos,
        int32_t end_marker_pos
    )
} // namespace app::classes::System::Xml::Schema::ParticleContentValidator
