#ifndef GUARD_CONSTANTS_BATTLE_TOWER_H
#define GUARD_CONSTANTS_BATTLE_TOWER_H

#define BATTLE_TOWER_FUNC_INIT                  0
#define BATTLE_TOWER_FUNC_GET_DATA              1
#define BATTLE_TOWER_FUNC_SET_DATA              2
#define BATTLE_TOWER_FUNC_SET_OPPONENT          3
#define BATTLE_TOWER_FUNC_SET_BATTLE_WON        4
#define BATTLE_TOWER_FUNC_GIVE_RIBBONS          5
#define BATTLE_TOWER_FUNC_SAVE                  6
#define BATTLE_TOWER_FUNC_GET_OPPONENT_INTRO    7
#define BATTLE_TOWER_FUNC_NOP                   8
#define BATTLE_TOWER_FUNC_NOP2                  9
#define BATTLE_TOWER_FUNC_LOAD_PARTNERS         10
#define BATTLE_TOWER_FUNC_PARTNER_MSG           11
#define BATTLE_TOWER_FUNC_LOAD_LINK_OPPONENTS   12
#define BATTLE_TOWER_FUNC_13                    13
#define BATTLE_TOWER_FUNC_SET_PARTNER_GFX       14
#define BATTLE_TOWER_FUNC_SET_INTERVIEW_DATA    15

#define TOWER_DATA_WIN_STREAK         1
#define TOWER_DATA_WIN_STREAK_ACTIVE  2
#define TOWER_DATA_LVL_MODE           3

// IDs for the messages printed by potential partners in the Battle Tower Multi Partner Room
#define PARTNER_MSGID_INTRO      0
#define PARTNER_MSGID_MON1       1
#define PARTNER_MSGID_MON2_ASK   2
#define PARTNER_MSGID_ACCEPT     3
#define PARTNER_MSGID_REJECT     4

// IDs for communicating with the Link Multi partner
#define BATTLE_TOWER_LINK_CONTINUE  0
#define BATTLE_TOWER_LINK_RETIRE    1

#define BATTLE_TOWER_LINKSTAT_CONTINUE        0
#define BATTLE_TOWER_LINKSTAT_BOTH_RETIRE     1
#define BATTLE_TOWER_LINKSTAT_PARTNER_RETIRE  2
#define BATTLE_TOWER_LINKSTAT_PLAYER_RETIRE   3

// Ids for special multi battle types
#define MULTI_BATTLE_2_VS_2 0
#define MULTI_BATTLE_2_VS_WILD 1
#define MULTI_BATTLE_2_VS_1 2
#define MULTI_BATTLE_CHOOSE_MONS 0x80

#endif //GUARD_CONSTANTS_BATTLE_TOWER_H
